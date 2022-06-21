#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    int a1 = 0;
    int b1 = 0;
    
    while(a>0){
        a1 *= 10;
        a1 += a%10;
        a /= 10;
    }
    while(b>0){
        b1 *= 10;
        b1 += b%10;
        b /= 10;
    }
    if(b1 > a1){
        cout << b1;
    }
    else{
        cout << a1;
    }
    return 0;
    
     
}