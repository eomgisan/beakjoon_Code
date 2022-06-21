#include <iostream>
#include <string>
using namespace std;

int OX(string s){
    int score = 0;
    int num = 0;
    for(char& v : s){
        if(v=='O'){
            num += 1;
            score += num;
        }
        else{
            num = 0;
        }
    }
    return score;
}

int main(){

    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        cout << OX(s) << "\n";
    }
    return 0;
}