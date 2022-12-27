#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int n; cin >> n;
    int array[1001][3];
    int cost[3];

    array[0][0] = 0;
    array[0][1] = 0;
    array[0][2] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> cost[0] >> cost[1] >> cost[2];

        array[i][0] = min(array[i - 1][1], array[i - 1][2]) + cost[0];
        array[i][1] = min(array[i - 1][0], array[i - 1][2]) + cost[1];
        array[i][2] = min(array[i - 1][1], array[i - 1][0]) + cost[2];
    }

    cout << min(array[n][0], min(array[n][1], array[n][2]));
    
    
    return 0;
}