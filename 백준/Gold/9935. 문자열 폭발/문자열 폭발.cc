#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    string s, bomb; cin >> s >> bomb;

    vector<char> cStack;
    int bomb_len = bomb.length();
    int slen = s.length();

    for (int i = 0; i < slen; ++i) {
        char temp = s[i];
        cStack.push_back(temp);
        int index = cStack.size() -1;
        if (cStack.size() < bomb_len) continue;

        bool flag = true;

        for (int j = 0; j < bomb_len; ++j) {
            if (cStack[index - j] != bomb[bomb_len - j - 1]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            for (int j = 0;j < bomb_len;++j) {
                cStack.pop_back();
            }
        }
    }

    if (cStack.empty()) cout << "FRULA";
    else {
        for (auto it : cStack) {
            cout << it;
        }
    }

    return 0;
}