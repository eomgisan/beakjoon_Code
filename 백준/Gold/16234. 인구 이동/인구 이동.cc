
#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std;

int N, L, R;


int rst = -1;

vector<vector<int>> MAP;
vector<vector<bool>> isUnited;

queue<pair<int, int>> que;



void bfs(int x, int y) {
	que.push(make_pair(x, y));
	isUnited[x][y] = true;
	vector<pair<int, int>> united_country;
	int total_people = 0;


	while (!que.empty()) {
		pair<int, int> now = que.front();

		que.pop();
		
		

		united_country.push_back(now);
		total_people += MAP[now.first][now.second];
		// 상
		if (now.first - 1 >= 0 && !isUnited[now.first - 1][now.second]) {
			int dif = abs(MAP[now.first][now.second] - MAP[now.first - 1][now.second]);
			if (dif >= L && dif <= R) {
				que.push(make_pair(now.first - 1, now.second));
				isUnited[now.first - 1][now.second] = true;
			}
		}
		// 하
		if (now.first + 1 < N && !isUnited[now.first + 1][now.second]) {
			int dif = abs(MAP[now.first][now.second] - MAP[now.first  +1][now.second]);
			if (dif >= L && dif <= R) {
				que.push(make_pair(now.first + 1, now.second));
				isUnited[now.first + 1][now.second] = true;
			}
		}
		// 우
		if (now.second + 1 < N && !isUnited[now.first][now.second + 1]) {
			int dif = abs(MAP[now.first][now.second] - MAP[now.first][now.second + 1]);
			if (dif >= L && dif <= R) {
				que.push(make_pair(now.first, now.second + 1));
				isUnited[now.first][now.second + 1] = true;
			}
		}
		// 좌

		if (now.second -1 >= 0 && !isUnited[now.first][now.second -1 ]) {
			int dif = abs(MAP[now.first][now.second] - MAP[now.first][now.second - 1]);
			if (dif >= L && dif <= R) {
				que.push(make_pair(now.first, now.second - 1));
				isUnited[now.first][now.second - 1] = true;
			}
		}
	}

	total_people /= united_country.size();

	for (auto it : united_country) {
		MAP[it.first][it.second] = total_people;
	}

}


int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

	
	cin >> N >> L >> R;

	for (int i = 0; i < N; i++) {
		vector<int> temp;
		vector<bool> b_temp;
		for (int j = 0; j < N; j++) {
			int tem; cin >> tem;
			temp.push_back(tem);
			b_temp.push_back(false);
		}
		MAP.push_back(temp);
		isUnited.push_back(b_temp);
	}


	
	while(true) {
		
		fill(isUnited.begin(), isUnited.end(), vector<bool>(N, false));

		int now_united_contry = 0;

		for (int x = 0; x < N; x++) {
			for (int y = 0; y < N; y++) {
				if (!isUnited[x][y]) {
					bfs(x, y);
					now_united_contry++;
				}
			}
		}


		rst++;
		if (now_united_contry == N * N) break;
		
		
	}
	
	cout << rst;


	return 0;
}


