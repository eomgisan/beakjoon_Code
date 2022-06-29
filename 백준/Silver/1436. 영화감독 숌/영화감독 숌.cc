#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 665;
	int count = 0;
	while (count != n) {
		i += 1;
		int num = i;
		while (num > 100) {
			if (num % 1000 == 666) {
				count++;
				break;
			}
			else {
				num /= 10;
			}
		}
	}

	cout << i;
}