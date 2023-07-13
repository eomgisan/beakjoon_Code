#include <iostream>
#include <vector>
#include <string>

using namespace std;


class example : public vector<char> {

public:
    void push_back(const char& ch) {
        if (!vector<char>::empty()) {
            
            if (ch == ')') {
                char temp;
                while(!vector<char>::empty() && vector<char>::back() != '('){
                    cout << vector<char>::back();
                    vector<char>::pop_back();
                }
                vector<char>::pop_back();
                return;
            }

            if ((ch == '*' || ch == '/')) {
                while (!vector<char>::empty() && (vector<char>::back() == '*' || vector<char>::back() == '/')) {
                    cout << vector<char>::back();
                    vector<char>::pop_back();
                }
            }

            if ((ch == '+' || ch == '-')) {
                while (!vector<char>::empty() && vector<char>::back() != '(' ){
                    cout << vector<char>::back();
                    vector<char>::pop_back();
                }
            }

        }  

        vector<char>::push_back(ch);
    }
};

int main() {
    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    string s; cin >> s;


    example cStack;

    for (auto it : s) {
        if (it >= 'A' && it <= 'Z') {
            cout << it;
        }
        else {
            cStack.push_back(it);
        }
    }
    while (!cStack.empty()) {
        char temp = cStack.back();
        cout << temp;
        cStack.pop_back();
    }





    return 0;
}