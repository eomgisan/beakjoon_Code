#include <iostream>
using namespace std;


int N = 0;
void star(int m, int n, int num) {

	if (((m / num) % 3 == 1) && ((n / num) % 3 == 1)) {
		cout << " ";
	}
		
	else {
		if (num == 1) {
			cout << "*";
		}
		else {
			star(m, n, num/3);
		}
	}
}

int main() {
	

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			star(i, j, N);
		}
		cout << "\n";
	}

	return 0;
}