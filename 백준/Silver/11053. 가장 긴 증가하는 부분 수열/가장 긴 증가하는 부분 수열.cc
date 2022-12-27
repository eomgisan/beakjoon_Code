#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int n; cin >> n;
    vector<int> arr;
    arr.push_back(0);
    for (int i = 0;i < n;i++) {
        int num; cin >> num;
        arr.emplace_back(num);
    }
    vector<int>dp;
    dp.push_back(0);
    for (int i = 1;i <= n;i++) {
        int max_index = 0;
        for (int j = 1; j < i;j++) {
            if ((arr[j] < arr[i]) && (dp[j] > dp[max_index])) {
               max_index = j;
            }
        }
        dp.push_back(dp[max_index] + 1);
    }

    sort(dp.begin(), dp.end());
    cout << dp.back();

    
    return 0;
}