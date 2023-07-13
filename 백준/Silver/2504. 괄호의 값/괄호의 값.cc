#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    string s; cin >> s;

    vector<int> cStack;
    int value = 0;
    
    for (auto it : s) {
        
        if (it == ')') {
            int temp = 0;
            while (!cStack.empty()) {
                if (cStack.back() == -1 ) {
                    cStack.pop_back();
                    if (temp == 0) temp = 1;
                    cStack.push_back(temp * 2);
                    break;
                }
                else {
                    if (cStack.back() == -2) {
                        cout << '0';
                        
                        return 0;
                    }
                    temp += cStack.back();
                    cStack.pop_back();
                }
            }

            if (cStack.empty()) {
                cout << '0';
            
                return 0;
            }

        }
        else if (it == ']') {
            int temp = 0;
            while (!cStack.empty()) {
                if (cStack.back() ==  -2 ) {
                    cStack.pop_back();
                    if (temp == 0) temp = 1;
                    cStack.push_back(temp * 3);
                    break;
                }
                else {
                    if (cStack.back() == -1) {
                        cout << '0';
                        return 0;
                    }
                    temp += cStack.back();
                    cStack.pop_back();
                }
            }
            if (cStack.empty()) {
                cout << '0';
            
                return 0;
            }
        }
        else {
            if (it == '(') cStack.push_back(-1);
            else cStack.push_back(-2);          
        }
    }

    
    for (auto it : cStack) {
        if (it < 0) {
            cout << '0';
            return 0;
        }
        value += it;
    }
    
    cout << value;

    return 0;
}