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
	int count = 0;
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int p = 0;
		cin >> p;
		if (isPrime(p))
			count++;
	}
	cout << count;
	return 0;
}