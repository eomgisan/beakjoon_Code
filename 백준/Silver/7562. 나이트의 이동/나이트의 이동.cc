#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct point {
	int x;
	int y;
	
	const bool operator ==(const point& _other) {
		return _other.x == x && _other.y == y;
	}
};

int dx[8] = { 1,2,2,1,-1,-2,-2,-1 };
int dy[8] = { 2,1,-1,-2,2,1,-1,-2 };

int testcase; 
int siz; 
int main() {
	cin >> testcase;
	
	while (testcase--) {
		cin >> siz;
		vector<vector<int>> visited(siz, vector<int>(siz, 0));
		int x, y; cin >> x >> y;

		point start = { x,y };
		visited[x][y] = 1;

		cin >> x >> y;
		point goal = { x,y };
		
		queue<point> que;
		que.push(start);
		

		while (!que.empty()) {
			point now = que.front();
			if (now == goal) {
				cout << visited[now.x][now.y] - 1 << '\n';
				break;
			}
			que.pop();
			for (int i = 0; i < 8; ++i) {
				if (now.x + dx[i] >= 0 && now.y + dy[i] >= 0 && now.x + dx[i] < siz && now.y + dy[i] < siz && visited[now.x + dx[i]][now.y + dy[i]] == 0) {
					que.push({ now.x + dx[i], now.y + dy[i] });
					visited[now.x + dx[i]][now.y + dy[i]] = visited[now.x][now.y] + 1;
				}
			}
		}
	}

	return 0;
}