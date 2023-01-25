
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	vector<int> map[101];

	int comp; cin >> comp;
	vector<bool> visited(comp+1, false);
	int edge; cin >> edge;

	while (edge--) {
		int from, to; cin >> from >> to;

		map[from].push_back(to);
		map[to].push_back(from);
	}
	queue<int> que;
	int rst = 0;
	que.push(1);
	visited[1] = true;
	while (!que.empty()) {
		int temp = que.front();
		que.pop();

		for (auto it : map[temp]) {
			if (!visited[it]) {
				que.push(it);
				visited[it]= true;
				++rst;
			}
		}
	}

	cout << rst;
	return 0;
}
