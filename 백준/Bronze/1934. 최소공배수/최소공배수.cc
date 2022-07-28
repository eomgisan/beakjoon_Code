#include <iostream>


using namespace std;

int find_gcd(int a, int b) {
	int c = a > b ? a : b;
	b = a > b ? b : a;
	a = c;
	c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int find_lcm(int a, int b) {
	if (a % b == 0 || b % a== 0) {
		return a > b ? a : b;
	}

	return (a * b) / find_gcd(a, b);
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int caseCnt;
	cin >> caseCnt;

	for (int i = 0; i < caseCnt;i++) {
		int a, b;
		cin >> a >> b;
		cout << find_lcm(a, b) << "\n";
	}

	
	return 0;
}