#include <iostream>
using namespace std;

int isDc(int n){
    if(n <100){
        return 1;
    }
    
    int rPast = n%10;
    n /= 10;
    int r = n%10;
    int C = r - rPast;
    
    while(n>9){
        rPast = r;
        n /= 10;
        r = n%10;
        if(C != r - rPast){
            return 0;
        }
    }
    
    return 1;
}

int main(){
    int n;
    cin >> n;
    
    int count = 0;
    
    for(int i=1; i<=n; i++){
        
        if(isDc(i) == 1){
            count++;
        }
        
    }
    cout << count;
    return 0;
}