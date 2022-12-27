#include <vector>
#include <iostream>
using namespace std;

int Max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int count, max; cin >> count >> max;
    vector<vector<int>> dp;
    vector<pair<int, int>> arr;
    arr.push_back({ 0,0 });

    vector<int> temp(max+1, 0);
    dp.push_back(temp);
    
    for (int num = 1; num <= count; num++) {
        int weight, value; cin >> weight >> value;
        arr.push_back({ weight, value });
        vector<int>now(max+1, 0);
        for (int w = 1;w <= max;w++) {
            if (arr[num].first > w) {
                now[w] = dp[num - 1][w];
            }
            else {
                now[w] = Max(arr[num].second + dp[num - 1][w - arr[num].first], dp[num - 1][w]);
            }
        }
        dp.push_back(now);
    }

    cout << dp[count][max];


    
    
    return 0;
}