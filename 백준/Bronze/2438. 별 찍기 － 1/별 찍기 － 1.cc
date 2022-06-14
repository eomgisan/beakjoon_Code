#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,i,j;
    cin >> t;
    
    for(i=1;i<t+1;i++){
        for(j=1;j<i+1;j++){
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}