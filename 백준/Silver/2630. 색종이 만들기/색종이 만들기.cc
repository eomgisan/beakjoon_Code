#include <iostream>
#include <vector>
#include <string>
using namespace std;
int len;
int blue =0;
int white =0;
void isSquare(pair<int, int> a, int size, vector<vector<int>>& arr) {
    
    int flag = arr[a.second][a.first];
    if (size == 1) {
        if (flag == 1) blue++;
        else white++;

        return;
    }

    for (int i = a.second; i < a.second + size; ++i) {
        for (int j = a.first; j < a.first + size; ++j) {
            if (flag != arr[i][j]) {
                isSquare(a, size / 2, arr);
                isSquare(make_pair(a.first, a.second + size/2), size / 2, arr);
                isSquare(make_pair(a.first + size / 2, a.second), size / 2, arr);
                isSquare(make_pair(a.first + size / 2, a.second + size/2), size / 2, arr);
                return;
            }
        }
    }

    if (flag == 1) blue++;
    else white++;

    return;
    
}

int main() {

    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(false);
    
    cin >> len;
    vector<vector<int>> arr;
   

    for (int i = 0; i < len; ++i) {
        vector<int> temp;
        
        for (int j = 0; j < len; ++j) {
            int num; cin >> num;
            temp.push_back(num);
         
        }
        
        arr.push_back(temp);
    }

    
    isSquare(make_pair(0, 0), len, arr);
    
    cout << white << '\n' << blue;
    return 0;
}