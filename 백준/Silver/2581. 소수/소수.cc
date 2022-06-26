#include <iostream>
using namespace std;

bool isPrime(int p) {
	if(p == 1)
		return false;
	for (int j= 2; j*2 <= p; j++) {
		if (p % j == 0)
			return false;
	}
	return true;
}

int main() {
	int sum = 0;
	int min = 0;
	int m, n;
	cin >> m;
	cin >> n;

	for (int i = m; i <= n; i++) {
		if (isPrime(i)) {
			sum += i;
			if (!min) {
				min = i;
			}
		}
	}

	if (min && sum) {
		cout << sum << "\n" << min;

	}
	else {
		cout << -1;
	}
	


	return 0;
}