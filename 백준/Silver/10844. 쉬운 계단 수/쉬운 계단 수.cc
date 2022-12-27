#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int main() {
    vector<int> last_num = { 0,1,1,1,1,1,1,1,1,1 };
    
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i == 1) continue;
        vector<int> temp = last_num;
        temp[0] = last_num[1] % 1000000000;
        temp[9] = last_num[8] % 1000000000;
        for (int i = 1;i <= 8;i++) {
            temp[i] = (last_num[i - 1] + last_num[i + 1]) % 1000000000;
        }
        last_num = temp;
    }
    
    int answer = 0;
    for (int i : last_num) {
        answer += i;
        answer %= 1000000000;
    }
    cout << answer;
    return 0;
}