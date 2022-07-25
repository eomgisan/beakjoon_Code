#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int len;
    cin >> len;
    int min= 1000000, max = 2;
    
    for (int i = 0; i < len; i++) {
        int a;
        cin >> a;
        if (min > a) {
            min = a;
        }
        if (max < a) {
            max = a;
        }
    }

    cout << min * max;
    return 0;
}