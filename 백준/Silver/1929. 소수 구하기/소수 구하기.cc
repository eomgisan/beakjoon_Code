#include <iostream>
using namespace std;


int isPrime(int i) {
	if (i <= 1) {
		return 0;
	}
	else {
		for (int j = 2;j * j <= i;j++) {
			if (i % j == 0) {
				return 0;
			}
		}
	}
	return i;
}




int main() {
	int m, n;
	cin >> m >> n;
	for (int i = m;i <= n;i++) {
		if (isPrime(i)) {
			cout << i << "\n";
		}
	}
	return 0;
}