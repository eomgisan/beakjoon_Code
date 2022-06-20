#include <iostream>
using namespace std;

int main(){
    int mod[42] = {0,};
    int a;
    int count = 0;
    for(int i = 0; i<10; i++){
        
        cin >> a;
        if(mod[a%42] == 0){
            count++;
        }
        mod[a%42]++;
        
    }
    cout << count;
    
    
    return 0;
}