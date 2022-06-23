#include <iostream>
#include <math.h>
using namespace std;

int getNum(int k, int n) {
	if (k == 0) {
		return n;
	}
	if (n == 1) {
		return 1;
	}
	return (getNum(k - 1, n) + getNum(k, n - 1));
}


int main() {

	int testcount;
	int k, n;
	cin >> testcount;
	for (int i = 0; i < testcount;i++) {
		cin >> k >> n;
		cout << getNum(k, n) << "\n";
	}
	return 0;
}