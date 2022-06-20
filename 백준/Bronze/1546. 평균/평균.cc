#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double max=0;
    double score[n];
    for(int i = 0; i<n; i++){
        cin >> score[i];
        if(score[i] > max){
            max = score[i];
        }
    }
    double aver = 0;
    for (int i =0; i<n; i++){
        score[i] = (score[i]/(double)max)*100;
        aver += score[i];
    }
    
    cout << aver/n;
    
    return 0;
    
}