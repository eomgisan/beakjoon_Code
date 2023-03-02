#include <iostream>
#include <queue>
#include <vector>


using namespace std;

int cost[101];
int mem[101];
int dp[101][10001];

int MaxCost;
int cnt;
int need;
int main() {

	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
	
	cin >> cnt >> need;

	for (int i = 1;i <= cnt; ++i) {
		int temp; cin >> temp;
		mem[i] = temp;
	}
	for (int i = 1;i <= cnt; ++i) {
		int temp; cin >> temp;
		MaxCost += temp;
		cost[i] = temp;
	}
	int result = 0x3f3f3f3f;
	for (int i = 1; i <= cnt; ++i) {
		for (int c = 0; c <= MaxCost; ++c) {

			if (cost[i] <= c) {
				dp[i][c] = max(dp[i - 1][c], dp[i - 1][c - cost[i]] + mem[i]);
			}
			else {
				dp[i][c] = dp[i - 1][c];
			}

			if (dp[i][c] >= need) result = min(result, c);
		}
	}

	cout << result;
	return 0;
}