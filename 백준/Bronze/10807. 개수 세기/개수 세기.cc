#include <iostream>

using namespace std;

int cnt[201] = {0,};

int main() {

    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    int n; cin >> n;
    unsigned int rst = 0;

    while (n--) {
        int temp; cin >> temp;
        cnt[temp + 100]++;

    }

    cin >> n;
    cout << cnt[n + 100];
    return 0;
}