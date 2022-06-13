#include <iostream>
using namespace std;

int main(){
    int a,b;
    
    cin >> a >> b;
    int b3 = b/100;
    int b2 = b/10 - b3*10;
    int b1 = b - b3*100 - b2*10;
    
    cout << a*b1 << endl << a*b2 << endl << a*b3 << endl << a*b << endl;
    return 0;
}