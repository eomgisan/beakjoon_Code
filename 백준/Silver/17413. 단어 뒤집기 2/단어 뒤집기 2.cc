#include <iostream>
#include <vector>
#include <string>

using namespace std;

void clearStack(vector<char>& cs) {
    while (!cs.empty()) {
        cout << cs.back();
        cs.pop_back();
    }
    return;
}

int main() {
    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    string s;

    getline(cin, s);


    vector<char> cStack;
    bool flag = false;

    for (auto it : s) {

        if (flag) {
            cout << it;
            if (it == '>') flag = false;
        }
        else {
            if (it == ' ') {
                clearStack(cStack);
                cout << it;
            }
            else if (it == '<') {
                flag = true;
                clearStack(cStack);
                cout << it;
            }
            
            else {
                cStack.push_back(it);
            }


        }
    }

    clearStack(cStack);
    return 0;
}