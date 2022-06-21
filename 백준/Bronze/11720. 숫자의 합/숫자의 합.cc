#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int sum =0;
    for(char a : s){
        sum += (int)a - '0';
    }
    cout << sum;
    return 0;
}