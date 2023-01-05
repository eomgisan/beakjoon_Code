#include <iostream>
#include <vector>

using namespace std;

int result;
int n;

void bfs(vector<int>& chess, int count) {
    if (count == n) {
        result++;
        return;
    }

    for (int i = 0; i < n; ++i) {
        // i: 현재 층에 놓을 자리
        // 놓기 위해서는  count층까지의 chess들을 판단해야함
        bool flag = true;
        for (int j = 0; j < count; ++j) {
            // 같은 열인가?
            if (chess[j] == i) {
                flag = false;
                break;
            }
            // 대각선인가?
            if (abs(count - j) == abs(i - chess[j]))  {
                flag = false;
                break;
            }
        }

        // i가 만족하는 자리라면
        if (flag) {
            // 해당 자리에 넣은 후 다음 단계
            chess[count] = i;
            bfs(chess, count + 1);
            // 해당 자리에서의 가짓수를 모두 파악했다면 해당 자리를 해제
            chess[count] = -1;
        }
    }

}

int main() {
    cin >> n;

    vector<int> chess(n, -1);

    bfs(chess, 0);

    cout << result;
        

    
    
    return 0;
}