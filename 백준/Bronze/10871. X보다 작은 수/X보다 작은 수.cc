#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N,x;
    cin >> N >> x;
    
    int a[N],i;
    for(i=0;i<N;i++){
        cin >> a[i];
    }
    
    for(i=0;i<N;i++){
        if(x>a[i]){
            cout << a[i] << " ";
        }
    }
    cout << "\n";
    
    return 0;
}