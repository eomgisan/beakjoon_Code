#include <iostream>
using namespace std;

int main(){

    int N,a,b,result,count;
    cin >> N;
    a = N/10;
    b = N%10;
    count = 0;
    while(true){
        result = (a+b)%10;
        a = b;
        b = result;
       
        count += 1;
        
        if(a*10+b == N){
            break;
        }
        
    }
    cout << count << "\n";
    return 0;
}