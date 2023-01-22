#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt = 0;
int v, e, start;

void dfs(vector<vector<int>>& graph, vector<int>& visited,int idx) {
    for (int i = 0; i < graph[idx].size(); ++i) {
        if (visited[graph[idx][i]] ==0) {
            visited[graph[idx][i]] = ++cnt;
            dfs(graph, visited, graph[idx][i]);
        }
    }

    return;
}


int main() {

    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);
    cin >> v >> e >> start;

    vector<vector<int>>graph(v);
    vector<int> visited(v, 0);

    while (e--) {
        int from, to; cin >> from >> to;

        graph[from - 1].push_back(to - 1);
        graph[to - 1].push_back(from - 1);
    }
    for (int i = 0; i < v; ++i) {
        sort(graph[i].begin(), graph[i].end(),greater<int>());
    }
    visited[start - 1] = ++cnt;
    dfs(graph, visited, start - 1);

    for (auto it : visited) {
        cout << it << '\n';
    }
    return 0;
}