#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,i,result;
    cin >> t;
    result = 0;
    for(i=1;i<t+1;i++){
        result +=i;
    }
    
    cout << result;
    
    return 0;
}