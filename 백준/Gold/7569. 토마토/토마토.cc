#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int m, n, h;

struct point {
	int z;
	int y;
	int x;
	
	const bool operator ==(const point& _other) {
		return _other.x == x && _other.y == y && _other.z == z;
	}
};

int dx[6] = { 1,0,-1,0,0,0 };
int dy[6] = { 0,1,0,-1,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };


int main() {
	cin >> m >> n >> h;

	vector<vector<vector<int>>> tomato(h, vector<vector<int>>(n, vector<int>(m, 0)));
	queue<point> que;
	int temp = 0;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < m; ++k) {
				cin >> temp;
				if (temp == 1) {
					que.push({ i,j,k });
				}
					
				tomato[i][j][k] = temp;
			}
		}
	}
	int rst = 1;
	while (!que.empty()) {
		point now = que.front();
		que.pop();
		for (int i = 0; i < 6; ++i) {
			if (now.x + dx[i] >= 0 && now.y + dy[i] >= 0 && now.z + dz[i] >= 0 &&
				now.x + dx[i] < m && now.y + dy[i] < n && now.z + dz[i] < h &&
				tomato[now.z + dz[i]][now.y + dy[i]][now.x + dx[i]] == 0) {
				que.push({ now.z + dz[i], now.y + dy[i], now.x + dx[i] });

				tomato[now.z + dz[i]][now.y + dy[i]][now.x + dx[i]] = tomato[now.z][now.y][now.x] + 1;
				rst = rst > tomato[now.z + dz[i]][now.y + dy[i]][now.x + dx[i]] ? rst : tomato[now.z + dz[i]][now.y + dy[i]][now.x + dx[i]];
			}
		}
	}

	for (auto it2 : tomato) {
		for (auto it1 : it2) {
			for (int i : it1) {
				if (i == 0) {
					cout << -1;
					return 0;
				}
			}
		}
	}

	cout << rst - 1;
	return 0;
}