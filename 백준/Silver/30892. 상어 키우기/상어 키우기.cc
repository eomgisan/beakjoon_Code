#include <iostream>
#include <queue>
#include <vector>
#include <stack>

using namespace std;

priority_queue<int> pq;
stack<int> a;
long long N, K, T, temp;
void Eat();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> K >> T;
    for (int i = 0; i < N; ++i) {
        cin >> temp;
        pq.push(temp);
    }

    while (!pq.empty()) {
        temp = pq.top();
        if (temp < T) {
            break;
        }
        a.push(temp);
        pq.pop();
    }

    Eat();

    cout << T;
    return 0;
}

void Eat() {
    int t1, t2;
    while (K) {
        t2 = T; // t2 : 현재 크기
        
        // 큰것들중 먹을수 있는게 있는지 확인하기
        while (!a.empty()) { // 현재 크기보다 큰것들이 빌때까지 반복
            t1 = a.top(); // t1 : 큰것들중
            if (t1 >= T)
                // 먹을수 있는게 없으면 패스 
                break;

            else {
                // 먹을수 있는게 있다?

                // 만약 자기보다 작은게 있어? 그럼 옮겨줘 
                if (!a.empty() && a.top() < T) {   // 기존엔 if( !a.empty() && a.top() < T )
                    a.pop();
                    pq.push(t1);
                    // a.pop();
                }

                else {
                    T += t1;
                    --K;
                }
            }
        }

        if (K-- && !pq.empty()) {
            T += pq.top();
            pq.pop();
        }

        if (t2 == T)
            break;
    }
}