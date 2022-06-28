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
	int n = 1;
	while (true) {
		cin >>  n;
		if (n == 0) {
			return 0;
		}
		int count = 0;
		for (int i = n+1;i <= 2*n;i++) {
			if (isPrime(i)) {
				count++;
			}
		}
		cout << count << "\n";
		
	}
	return 0;
}