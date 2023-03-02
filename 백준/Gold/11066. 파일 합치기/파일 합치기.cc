#include <iostream>
#include <queue>
#include <vector>
#include <memory.h>


using namespace std;


int testcase;
int num;



int dp[501][501];
int sum[501];
int main() {

	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
	

	cin >> testcase;
	while (testcase--) {
		memset(dp, 0, sizeof(dp));
		cin >> num;


		for (int i = 1; i <= num; ++i) {
			int temp; cin >> temp;
			sum[i] = sum[i - 1] + temp;
		}

		for (int len = 1; len <= num - 1; ++len) {
			for (int start = 1; start + len <= num; ++start) {
				dp[start][start + len] = 0x3f3f3f3f;

				for (int mid = start; mid < start+len; ++mid) {
					dp[start][start + len] = min(dp[start][start + len], dp[start][mid] +dp[mid+1][start+len] + sum[start+len] - sum[start-1]);
				}
				
			}
		}

		cout << dp[1][num] << '\n';

	}

}