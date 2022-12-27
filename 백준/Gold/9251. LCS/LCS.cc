#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int main() {
    string s1, s2; cin >> s1 >> s2;
    if (s1.size() < s2.size()) {
        string temp = s1;
        s1 = s2;
        s2 = temp;
    }
    vector<vector<int>> dp;
    vector<int> zero(s1.size()+1, 0);
    dp.push_back(zero);

    for (int j = 1; j <= s2.size(); j++) {
        vector<int> temp;
        temp.push_back(0);
        for (int i = 1;i <= s1.size();i++) {
            if (s2[j-1] == s1[i-1]) {
                temp.push_back(dp[j-1][i - 1] + 1);
            }
            else {
                int max = temp.back() > dp[j-1][i] ? temp.back() : dp[j-1][i];
                temp.push_back(max);
            }
        }
        dp.push_back(temp);
    }

    
    cout << dp.back().back();

    
    return 0;
}