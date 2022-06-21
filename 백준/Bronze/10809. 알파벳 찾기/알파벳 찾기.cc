#include <iostream>
using namespace std;

int main(){
    char s;
    int result[26];
    int i=0;
    for(i=0;i<26;i++){
        result[i] = -1;
    }
    i=0;
    while(!(cin >> s).eof()){
        int index = (int)s - 'a';
        if(result[index] == -1){
            result[index] = i;
        }
        i++;
    }
    for(int a : result){
        cout << a << " ";
    }
    return 0;
}