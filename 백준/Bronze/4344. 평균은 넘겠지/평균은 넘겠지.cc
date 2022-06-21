#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++){
        int count;
        cin >> count;
        int score[count] = {0,};
        double aver = 0;
        for(int& a : score){
            cin >> a;
            aver += a;
        }
        aver = aver/(double)count;
        double num = 0;
        for(int& b : score){
            if(b > aver){
                num++;
            }
        } 
        cout << fixed;
        cout.precision(3);
        cout << (num/count)*100 << "%\n";
    }
    return 0;
}