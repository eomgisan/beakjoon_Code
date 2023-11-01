#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    map<string,int> count;
    for(auto it : clothes){
        count[it[1]]++;
    }
    
    for(auto it: count){
        answer *= (it.second+1);
    }
    
    
    
    
    return answer-1;
}