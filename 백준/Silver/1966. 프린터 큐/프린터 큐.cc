#include <iostream>
#include <vector>

using namespace std;



int main() {
    int testcase; cin >> testcase;

    while (testcase--) {
        int importance[10] = { 0, };
        vector<int> printer;
        int len, index; cin >> len >> index;

        int result = 0;

        int num;
        for (int i = 0; i < len; ++i) {
            cin >> num;
            printer.emplace_back(num);
            importance[num]++;
        }

        while (index >= 0) {
            bool flag = true;
            int temp = printer[0];
            for (int i = 9; i > temp; --i) {
                if (importance[i] != 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ++result;
                --index;
                printer.erase(printer.begin());
                --importance[temp];
                --len;
            }
            else {
                if (!index) index += len - 1;
                else --index;
                printer.erase(printer.begin());
                printer.emplace_back(temp);
            }
        }

        cout << result << '\n';
    }

    

    
        

    
    
    return 0;
}