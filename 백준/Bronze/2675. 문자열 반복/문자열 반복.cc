#include <iostream>
#include <string>
using namespace std;

int main(){
    int count;
    cin >> count;
    for(int i=0; i<count ; i++){
        int num;
        string s;
        cin >> num;
        cin >> s;
        
        for(char ch : s){
            for(int j=0;j<num;j++){
                cout << ch;
            }
        }
              
        cout << "\n";
    }
    return 0;
}