#include <iostream>
using namespace std;

int d(int n){
    int result = n;
    while(1){
        if(n<10){
            result += n;
            return result;
        }
        result += n%10;
        n = n/10;
    }
}

int isSelfNum(int n){
    for(int i=0; i<n; i++){
        if(d(i)==n){
            return 0;
        }
    }
    return n;
}
int main(){
    int arr[10001] = {0,};
    for(int i=1; i<10001 ; i++){
        arr[i] = isSelfNum(i);
        if(arr[i] != 0){
            cout << arr[i] << "\n";
        }
    }
    return 0;
}