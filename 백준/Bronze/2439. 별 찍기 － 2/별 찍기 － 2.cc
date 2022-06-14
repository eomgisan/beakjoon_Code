#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,i,j;
    cin >> t;
    
    for(i=t;i>0;i--){
        for(j=1;j<i;j++){
            cout << " ";
        }
        for(j=i;j<t+1;j++){
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}