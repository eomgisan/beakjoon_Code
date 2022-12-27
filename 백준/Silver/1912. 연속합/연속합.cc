#include <iostream>

using namespace std;


int a[100000];
int sum[100000];
int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = a[0];

    for (int i = 0; i < n; i++) {
        sum[i] = a[i];
        if (i == 0) continue;
        if (sum[i] < sum[i - 1] + a[i]) sum[i] = sum[i - 1] + a[i];
        if (sum[i] > ans) ans = sum[i];
    }
    
    cout << ans << '\n';
    return 0;
}