#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

int bfs(vector<vector<int>>& graph){
    
    int n = graph.size();
    queue<int> qi;
    
    
    qi.push(0);
    vector<int> visited(n,-1);
    visited[0] = 0;
    
    while(!qi.empty()){
        
        int idx = qi.front();
        qi.pop();
        
        
        for(int i = 0; i< n; i++){
            if(graph[idx][i] && (visited[i] == -1)){
                qi.push(i);
                visited[i] = visited[idx] + 1;
            }
        }
    }
    
    int max = *max_element(visited.begin(), visited.end());
    
    int ans = 0;
    for(int i = 0 ; i< n ;++i) {
        if(visited[i] == max) ans++;
    }
    return ans;
}

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    
    vector<vector<int>> graph(n, vector<int>(n,0));
    
    for(auto it : edge){
        graph[it[0]-1][it[1]-1] = 1;
        graph[it[1]-1][it[0]-1] = 1;
    }

    answer = bfs(graph);
    return answer;
}