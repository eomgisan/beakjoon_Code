#include <iostream>
using namespace std;

int main(){
    int result = 1;
    int a;
    for(int i=0; i<3; i++){
        cin >> a;
        result = result * a;
    }
    int list[10] = {0,0,0,0,0,0,0,0,0,0};
    while(result >0){
        if(result >=10){
            int x = result % 10;
            result = result / 10;
            list[x] += 1;
        }
        else{
            list[result] += 1;
            break;
        }
    }
    for(int i=0;i<10;i++){
        cout << list[i] << "\n";
    }
    return 0;
    
}