#include <iostream>
#include <queue>
#include <vector>
#include <memory.h>

using namespace std;


int num;



int map[501][501];
int dp[501][501];
int m, n;
int dfs(int i, int j) {
	
	if (i == m && j == n) {
		return 1;
	}
	if (dp[i][j] != -1) return dp[i][j];

	dp[i][j] = 0;

	if (i + 1 <= m && map[i + 1][j] < map[i][j])
		dp[i][j] += dfs(i + 1, j);
	if (i - 1 >= 1 && map[i - 1][j] < map[i][j])
		dp[i][j] += dfs(i - 1, j);
	if (j + 1 <= n && map[i][j + 1] < map[i][j])
		dp[i][j] += dfs(i, j + 1);
	if (j - 1 >= 1 && map[i][j - 1] < map[i][j])
		dp[i][j] += dfs(i, j - 1);

	return dp[i][j];
}

int main() {

	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
	
	cin >> m >> n;

	if (m == 1 && n == 1) {
		cout << 1;
		return 0;
	}
	for (int i = 1; i <= m;++i) {
		for (int j = 1; j <= n;++j) {
			int temp; cin >> temp;
			map[i][j] = temp;
			dp[i][j] = -1;
		}
	}
	dfs(1, 1);
	
	cout << dp[1][1];
	return 0;
}