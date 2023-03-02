#include <iostream>
#include <vector>

using namespace std;


int num;



int dp[501][501];

int main() {

	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
	

		cin >> num;

		vector<pair<int, int>> sizeofM;
		sizeofM.push_back(make_pair(0, 0));
		for (int i = 1; i <= num;++i) {
			int a, b; cin >> a >> b;
			sizeofM.push_back(make_pair(a, b));
		}
		for (int len = 1; len < num; ++len) {
			for (int start = 1; start + len <= num; ++start) {
				int end = start + len;
				dp[start][end] = 0x3f3f3f3f;

				for (int mid = start; mid < end; ++mid) {
					dp[start][end] = min(dp[start][end], dp[start][mid] + dp[mid + 1][end] + sizeofM[start].first * sizeofM[mid].second * sizeofM[end].second);
				}
			}
		}

		cout << dp[1][num] << '\n';

	return 0;
}