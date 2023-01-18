#include <iostream>

using namespace std;


int main() {

    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    int max = -1;
    int x = 0, y = 0;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int temp; cin >> temp;
            if (max < temp) {
                x = i + 1; y = j + 1;
                max = temp;
            }
        }
    }
    cout << max << '\n' << x << " " << y;
    return 0;
}