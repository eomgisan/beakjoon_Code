#include <vector>

#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int n, count; cin >> n >> count;

    vector<int> arr;
    arr.push_back(0);
    for (int i = 1; i <= n;i++) {
        int num; cin >> num;
        arr.push_back(num + arr.back());
    }

    while (count--) {
        
        int a, b; cin >> a >> b;
        
        cout << arr[b] - arr[a-1] << '\n';
        
    }

    return 0;
}