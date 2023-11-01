#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for(int i = participant.size()-1 ;i>0;i--){
        if(participant[i] == completion[i-1]){
            participant.pop_back();
            completion.pop_back();
        }
        else{
            return participant[i];
        }
    }
    return participant[0];
}