#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int main() {
    vector<int> arr;

    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);

    int n; cin >> n;
    
    for (int i = 5;i <= n;i++) {
        if (i % 2 != 0 && i % 3 != 0) {
            arr.push_back(arr.back() + 1);
        }
        else if (i % 2 == 0 && i%3 == 0) {
            int temp = min(arr[i / 2] + 1, min(arr[i - 1] + 1, arr[i / 3] + 1));
            arr.push_back(temp);
        }
        else if (i % 3 == 0) {
            int temp = min(arr[i / 3] + 1, arr[i - 1] + 1);
            arr.push_back(temp);
        }
        else if (i % 2 == 0) {
            int temp = min(arr[i / 2] + 1, arr[i - 1] + 1);
            arr.push_back(temp);
        }
    }

    cout << arr[n];
    return 0;
}