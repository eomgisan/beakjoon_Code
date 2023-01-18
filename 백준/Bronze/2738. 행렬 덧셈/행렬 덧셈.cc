#include <iostream>

using namespace std;


int main() {

    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    int n, m; cin >> n >> m;
    
    int** arrA = new int* [n];
    

    for (int i = 0; i < n; ++i) {
        *(arrA + i) = new int[m];
       
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int temp; cin >> temp;
            arrA[i][j] = temp;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int temp; cin >> temp;
            arrA[i][j] += temp;
        }
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            
            cout << arrA[i][j] << " ";
        }
        cout << '\n';
    }

    for (int i = 0; i < n; ++i) {
        delete[] * (arrA + i);
       
    }
    delete[] arrA;
    
    return 0;
}