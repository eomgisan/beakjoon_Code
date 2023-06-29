#include <iostream>
#include <string>


using namespace std;



int main() {
    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    string s; cin >> s;


    
    int rst = 0;
    int pipeCount = 0;
    bool rizerFlag = false;


    for (size_t i = 0; i < s.size(); ++i) {
        char temp = s[i];
        if (temp == '(') {
            ++pipeCount;
            rizerFlag = true;
        }
        else {
            if (rizerFlag == true) {
              
                rst += --pipeCount;
                rizerFlag = false;
            }
            else {
                rst++;
                pipeCount--;
                rizerFlag = false;
            }
        }
    }

    cout << rst;

    return 0;
}