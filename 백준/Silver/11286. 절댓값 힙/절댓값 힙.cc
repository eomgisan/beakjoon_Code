#include <iostream>
#include <queue>
using namespace std;

struct comp {
    bool operator()(const int& a, const int& b) {
        if (abs(a) == abs(b)) return a > b;
        return abs(a) > abs(b);
    }
};


int main() {

    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    int tCase; cin >> tCase;
    priority_queue<int, vector<int>, comp> pq;
    while (tCase--) {
        int temp; cin >> temp;
        if (temp == 0) {
            if (pq.empty()) {
                cout << "0\n";
            }
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else {
            pq.push(temp);
        }
    }
    
    return 0;
}