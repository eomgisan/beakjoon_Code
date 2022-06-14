#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,t,i;
    cin >> t;
    
    for(i=1;i<t+1;i++){
        cin >> a >> b;
        cout << "Case #" << i << ": " << a+b << "\n";
    }
    
    return 0;
}