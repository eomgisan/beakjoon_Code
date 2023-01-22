#include <iostream>
#include <queue>

using namespace std;
#define MAX 1001

int e, v;
int graph[MAX][MAX];
bool visited[MAX];


void reset() {

	for (int i = 1; i <= e; ++i) {
		visited[i] = 0;
	}
}

void dfs(int idx) {
	visited[idx] = true;
	cout << idx << " ";

	for (int i = 1; i <= e;++i) {
		if (graph[idx][i] == 1 && !visited[i]) {
			dfs(i);
		}
	}
}


void bfs(int idx) {
	queue<int> que;
	que.push(idx);
	visited[idx] = true;
	cout << idx << " ";
	while (!que.empty()) {

		idx = que.front();
		que.pop();

		for (int i = 1; i <= e; ++i) {
			if (graph[idx][i] == 1 && !visited[i]) {
				que.push(i);
				visited[i] = true;
				cout << i << " ";
			}
		}
	}
}

int main() {
	
	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

	int start; cin >> e >> v >> start;


	for (int i = 0; i < v; ++i) {
		int from, to; cin >> from >> to;
		graph[from][to] = 1;
		graph[to][from] = 1;
	}
	
	reset();
	dfs(start);

	cout << '\n';

	reset();
	bfs(start);
	
	return 0;
}