#include <iostream>
#include <string>
using namespace std;
int Count(string s) {
    int count = 0;
    for (int i = 0; i < s.size();i++) {
        if (s.size() - 1 - i < 1) {
            count++;
        }

        else if (s.size() - 1 - i < 2) {
            if (s[i] == 'c' && (s[i + 1] == '=' or s[i + 1] == '-')) {
                count++;
                i++;
            }
            else if (s[i] == 'd' && s[i + 1] == '-') {
                count++;
                i++;
            }
            else if (s[i] == 'l' && s[i + 1] == 'j') {
                count++;
                i++;
            }
            else if (s[i] == 'n' && s[i + 1] == 'j') {
                count++;
                i++;
            }
            else if (s[i] == 's' && s[i + 1] == '=') {
                count++;
                i++;
            }
            else if (s[i] == 'z' && s[i + 1] == '=') {
                count++;
                i++;
            }
            else {
                count++;
            }
        }
        else {
            if (s[i] == 'c' && (s[i + 1] == '=' or s[i + 1] == '-')) {
                count++;
                i++;
            }
            else if (s[i] == 'd') {
                if (s[i + 1] == 'z' && s[i + 2] == '=') {
                    count++;
                    i += 2;
                }
                else if (s[i + 1] == '-') {
                    count++;
                    i++;
                }
                else{
                    count++;
                }
            }
            else if (s[i] == 'l' && s[i + 1] == 'j') {
                count++;
                i++;
            }
            else if (s[i] == 'n' && s[i + 1] == 'j') {
                count++;
                i++;
            }
            else if (s[i] == 's' && s[i + 1] == '=') {
                count++;
                i++;
            }
            else if (s[i] == 'z' && s[i + 1] == '=') {
                count++;
                i++;
            }
            else {
                count++;
            }
        }
    }
    return count;
}
int main() {
    string s;
    cin >> s;
    cout << Count(s);
    return 0;
}