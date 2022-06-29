#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i;
	int result = 0;
	for (i = 0;i < n;i++) {
		int sum = i;
		int j = i;
		while (j > 0) {
			sum += j % 10;
			j /= 10;
		}
		if (sum == n) {
			result = i;
			break;
		}
	}

	cout << result;
}