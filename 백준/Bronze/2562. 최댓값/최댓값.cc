#include <iostream>
using namespace std;

int main(){
    int i;
    int a;
    int index = 1;
    int max = 0;
    for(i=1; i<11; i++){
        cin >> a;
        if(a > max){
            max = a;
            index = i;
        }
    }
    cout << max << "\n" << index <<"\n";
    return 0;
}