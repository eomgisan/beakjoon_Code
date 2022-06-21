#include <iostream>
#include <string>
using namespace std;
char findMax(int a[]) {
    int maxIndex = 0;
    int sameCount = 0;

    for (int i = 1; i < 26; i++) {
        if (a[maxIndex] < a[i]) {
            maxIndex = i;
            sameCount = 0;
        }
        else if (a[maxIndex] == a[i]) {
            sameCount++;
        }
    }
    if (sameCount > 0) {
        return '?';
    }
    else {
        return 'A' + maxIndex;
    }

}
int main() {
    string s;
    cin >> s;
    int count[26] = { 0, };
    for (char ch : s) {
        if ((int)ch >= 'a'&& (int)ch <='z') {
            count[(int)ch - 'a']++;
        }
        else {
            count[(int)ch - 'A']++;
        }
    }
    cout << findMax(count);
    return 0;
}