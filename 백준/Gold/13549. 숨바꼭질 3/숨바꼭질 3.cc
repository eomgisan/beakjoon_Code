#include <iostream>
#include <vector>
#include <queue>

#define MAX 100001
using namespace std;
int mov[3] = { 2,1,-1 };
bool visited[MAX];
int dp[MAX];


void bfs(int start, int end) {
	queue<int> q;
	q.push(start);
	visited[start] = true;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		if (cur == end) {
			cout << dp[end];
			break;
		}
		for (int i = 0; i < 3; i++) {
			int next,time;
			if (i == 0) {
				next = cur * 2;
				time = 0;
			}
			else {
				next = cur + mov[i];
				time = 1;
			}
			if (next >= 0 && next < MAX && (!visited[next] || dp[next] > dp[cur] + time)) {
				q.push(next);
				visited[next] = true;
				dp[next] = dp[cur] + time;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k;
	cin >> n >> k;
	
	bfs(n, k);
	return 0;
}