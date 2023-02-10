#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define INT_MAX 100000000

struct node {
	int idx;
	int w;
	
};

int v, e;
int main() {

	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
	cin >> v >> e;
	int start; cin >> start;
	
	// 연결 리스트 또는 2차원 배열로 그래프 구성 정점 갯수가 2만개이므로 2차원 배열으로 하기엔 무리

	// 연결리스트 선택  graph[1] : 1과 연결된것들의 weight와 idx;
	vector<vector<node>> graph(v+1);
	// 방문 체크
	vector<bool> visited(v + 1, false);
	vector<int> rst(v + 1, INT_MAX);
	for (int i = 0; i < e; ++i) {
		int from, to, weigth; cin >> from >> to >> weigth;
		graph[from].push_back({ to, weigth });
	}

	
	rst[start] = 0;
	
	priority_queue<pair<int,int>> pq;

	pq.push(make_pair(0,start));
	while (!pq.empty()) {
		int now_idx = pq.top().second;
		int now_dis = -(pq.top().first);

		pq.pop();

		if (rst[now_idx] < now_dis) {
			continue;
		}
		
		for (auto it : graph[now_idx]) {

			if (rst[it.idx] > now_dis + it.w) {
				rst[it.idx] = now_dis + it.w;
				pq.push(make_pair(-(rst[it.idx]), it.idx));
			}
			
		}
	}
	
	for (int i = 1;i <= v; ++i) {
		if (rst[i] == INT_MAX) {
			cout << "INF" << '\n';
		}
		else {
			cout << rst[i] << '\n';
		}
		
	}

	return 0;

}