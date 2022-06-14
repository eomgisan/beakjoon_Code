#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,t,i;
    cin >> t;
    
    for(i=0;i<t;i++){
        cin >> a >> b;
        cout << a+b << "\n";
    }
    
    return 0;
}