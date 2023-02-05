#include <iostream>
#include <queue>
using namespace std;

#define MAX 101

struct node {
	int idx;
	int stream;
	bool visited;
	int cnt;
};

node arr[MAX];

int main() {
	
	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

	for (int i = 1; i < MAX - 1; i++) {
		arr[i] = { i, 0,false,0 };
	}
	
	int upStream, downStream; cin >> upStream >> downStream;
	int stream = upStream + downStream;
	while (stream--) {
		int from, to; cin >> from >> to;
		arr[from] = { from,to,false,0 };
	}

	queue<node> que;
	arr[1].visited = true;
	que.push(arr[1]);
	

	while (!que.empty()) {
		node now = que.front();
		que.pop();
		if (now.idx == 100) break;

		for (int i = 1; i <= 6; ++i) {
			if (now.idx + i <= 100 && arr[now.idx + i].visited == false) {
				if (arr[now.idx + i].stream == 0) {
					arr[now.idx + i].cnt = now.cnt + 1;
					arr[now.idx + i].visited = true;
					que.push(arr[now.idx + i]);
				}
				else {
					if (arr[arr[now.idx + i].stream].visited == false) {
						arr[arr[now.idx + i].stream].cnt = now.cnt + 1;
						arr[arr[now.idx + i].stream].visited = true;
						que.push(arr[arr[now.idx + i].stream]);
					}
				}
				

			}
		}
	}
	cout << arr[100].cnt;
	return 0;
}