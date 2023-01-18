#include <iostream>

using namespace std;


int main() {

    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    int arr[5] = {0,};

    int mean = 0;
    for (int i = 0; i < 5; ++i) {
        int temp; cin >> temp;
        arr[i] = temp;
        mean += temp;
    }

    mean /= 5;

    for (int i = 4; i >0; --i) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << mean << '\n' << arr[2];
    return 0;
}