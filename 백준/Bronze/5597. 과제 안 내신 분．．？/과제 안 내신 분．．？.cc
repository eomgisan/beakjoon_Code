#include <iostream>

using namespace std;

unsigned int cnt[30] = {0,};

int main() {

    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    
    int n = 28;

    while (n--) {
        int temp; cin >> temp;
        cnt[temp - 1]++;

    }

    for (int i = 0; i < 30; i++) {
        if (cnt[i] == 0) {
            cout << i + 1 << '\n';
        }
    }
   
    return 0;
}