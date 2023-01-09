#include <iostream>
#include <deque>
#include <string>
using namespace std;



int main() {

    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(false);
    

    int testcase; cin >> testcase;

    while (testcase--) {
        deque<int> deq;
        string cmd; cin >> cmd;
        int len; cin >> len;

        string list; 
        cin >> list;
        int num = 0;
        for (int i = 0; list.size() > i; i++) {
            if (list[i] >= '0' && list[i] <= '9') {
                num *= 10;
                num += list[i] - '0';
            }
            else {
                if (num != 0) {
                    deq.push_back(num);
                    num = 0;
                }
            }
        }

        bool isR = false;
        bool isError = false;

        for (char ch : cmd) {
            if (ch == 'R') isR = !isR;
            else {
                if (deq.size() == 0) {
                    isError = true;
                    break;
                }
                if (isR) {
                    deq.pop_back();
                }
                else {
                    deq.pop_front();
                }
            }
        }

        if (isError) cout << "error" << '\n';
        else if (deq.empty()) cout << "[]" << '\n';
        else {
            cout << '[';
            if (isR) {
                for (int i = deq.size()-1; i >0 ; --i) {
                    cout << deq[i] << ',';
                }
                cout << deq[0] << ']' << '\n';
            }
            else {
                for (int i = 0; i < deq.size() - 1; ++i) {
                    cout << deq[i] << ',';
                }
                cout << deq.back() << ']' << '\n';
            }
            
        }
    }
    

    
        

    
    
    return 0;
}