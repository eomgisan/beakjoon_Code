#include <iostream>
#include <queue>

using namespace std;



bool map[50][50];
bool visited[50][50];
int x, y;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { -1,1,0,0 };

int main() {
	
	int testcase; cin >> testcase;
	while (testcase--) {
		for (int i = 0;i < 50;i++) {
			for (int j = 0;j < 50;j++) {
				map[i][j] = false;
				visited[i][j] = false;
			}
		}
		int cnt; cin >> x >> y >> cnt;

		while (cnt--) {
			int a, b; cin >> a >> b;
			map[a][b] = true;
		}
		
		int rst = 0;

		for (int i = 0; i < x; ++i) {
			for (int j = 0; j < y; ++j) {
				if (map[i][j] && !visited[i][j]) {
					queue<pair<int, int>> que;
					que.push(make_pair(i, j));
					while (!que.empty()) {
						pair<int, int> temp = que.front();
						que.pop();
						for (int k = 0; k < 4; ++k) {
							if (temp.first + dx[k] >= 0 && temp.first + dx[k] < x && temp.second + dy[k] >= 0 && temp.second + dy[k] < y) {
								if (map[temp.first + dx[k]][temp.second + dy[k]] && !visited[temp.first + dx[k]][temp.second + dy[k]]) {
									que.push(make_pair(temp.first + dx[k], temp.second + dy[k]));
									visited[temp.first + dx[k]][temp.second + dy[k]] = true;
								}
							}
						}

					}
					++rst;
				}
			}
		}
		cout << rst << '\n';
		


	}
		

	return 0;
}


