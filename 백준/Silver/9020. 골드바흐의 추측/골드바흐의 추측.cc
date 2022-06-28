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
	int n = 0;
	int testCase = 0;
	cin >> testCase;
	for (int i = 0;i < testCase;i++) {
		cin >> n;
		for (int j = n / 2;j > 0;j--) {
			if (isPrime(j)) {
				if (isPrime(n - j)) {
					cout << j << " " << n - j << "\n";
					break;
				}
				
			}
		}
	}
	
	

	return 0;
}