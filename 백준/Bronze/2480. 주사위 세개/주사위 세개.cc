   
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    
    cin >> a >> b >> c;
      
    int price;
    
    if(a == b && b == c){
        price = 10000 + a*1000;
        cout << price;
    }
    else if (a==b){
        price = 1000 + a*100;
        cout << price;
    }
    else if (b==c){
        price = 1000 + b*100;
        cout << price;
    }
    else if (c==a){
        price = 1000+ c*100;
        cout << price;
    }
    else if (a>b && a>c){
        price = a*100;
        cout << price;
    }
    else if (b>a && b>c){
        price = b*100;
        cout << price;
    }
    else{
        price = c*100;
        cout << price;
    }
    return 0;
}