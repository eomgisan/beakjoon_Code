#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int i, j;
	i = N/5;
	j = 0;

	while (5 * i + 3 * j != N) {
		if (i < 0) {
			break;
		}
		else {
			if (5 * i + 3 * j < N) {
				j++;
			}
			else if (5 * i + 3 * j > N) {
				i--;
			}
		}
	}

	if (i < 0) {
		cout << -1;
	}
	else {
		cout << i + j;
	}
	return 0l;
}