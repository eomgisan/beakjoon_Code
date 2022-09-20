#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double a, b, v;
    cin >> a >> b >> v;
    int day = ceil((v - b) / (a - b));
    cout << day;

    return 0;
}