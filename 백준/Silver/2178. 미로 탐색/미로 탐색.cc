#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int m, n;
vector<vector<int>> map;
vector<vector<bool>> visited;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

int main() {
	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		string temp; cin >> temp;
		vector<int> arr;
		vector<bool> vis;
		for (int j = 0; j < n; ++j) {
			arr.emplace_back(temp[j]-'0');
			vis.emplace_back(false);
		}
		map.emplace_back(arr);
		visited.emplace_back(vis);
	}
	queue<vector<int>> que;

	que.push({ 0,0,1 });
	visited[0][0] = true;
	int rst = 100000000;
	while (!que.empty()) {
		int x = que.front()[0];
		int y = que.front()[1];
		int cnt = que.front()[2];
		que.pop();
		if (x == m - 1 && y == n - 1) {
			rst = rst < cnt ? rst : cnt;
		}
		else {
			for (int i = 0; i < 4; ++i) {
				if (x + dx[i] < 0 || x + dx[i] >= m || y + dy[i] < 0 || y + dy[i] >= n) {
					continue;
				}
				else {
					if (map[x + dx[i]][y + dy[i]] == 1 && !visited[x + dx[i]][y + dy[i]]) {
						que.push({ x + dx[i],y + dy[i],cnt + 1 });
						visited[x + dx[i]][y + dy[i]] = true;
					}
				}
			}
		}		
	}
	cout << rst;
	return 0;
}