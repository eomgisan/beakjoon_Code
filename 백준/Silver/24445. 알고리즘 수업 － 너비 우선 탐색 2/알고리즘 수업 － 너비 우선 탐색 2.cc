
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int cnt = 0;
int v, e, start;

void bfs(vector<vector<int>>& graph, vector<int>& visited, queue<int>& que) {
    while (!que.empty()) {
        int now = que.front();
        que.pop();

        for (int i = 0;i < graph[now].size(); ++i) {
            if (visited[graph[now][i]] == 0) {
                visited[graph[now][i]] = ++cnt;
                que.push(graph[now][i]);
            }
        }
    }

    return;
}


int main() {

    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);
    cin >> v >> e >> start;

    vector<vector<int>>graph(v);
    vector<int> visited(v, 0);

    queue<int> que;
    while (e--) {
        int from, to; cin >> from >> to;

        graph[from - 1].push_back(to - 1);
        graph[to - 1].push_back(from - 1);
    }
    
    for (int i = 0; i < v; ++i) {
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }
    
    que.push(start - 1);
    visited[start - 1] = ++cnt;
    bfs(graph, visited, que);

    for (auto it : visited) {
        cout << it << '\n';
    }
    return 0;
}