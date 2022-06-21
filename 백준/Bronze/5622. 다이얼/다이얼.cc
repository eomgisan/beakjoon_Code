#include <iostream>
using namespace std;
int time(char a){
    int n = (int)a-'A';
    
    if(n<=2)
        return 3;
    else if(n<=5)
        return 4;
    else if(n<=8)
        return 5;
    else if(n<=11)
        return 6;
    else if(n<=14)
        return 7;
    else if(n<=18)
        return 8;
    else if(n<=21)
        return 9;
    else
        return 10;
    
}
int main(){
    int result=0;
    char ch;
    while(!(cin >> ch).eof()){
        result += time(ch);
    }
    cout << result;
    return 0;
    
}