#include <iostream>
#include <math.h>
using namespace std;

int n;
int m[1000001] = { 0, };


int dp(int n) {
	if (n < 1) {
		return 0;
	}
	if (m[n] != 0)
		return m[n];

	for (int i = 3;i <= n;i++) {
		int temp = m[i-1] + m[i-2];
		m[i] = temp % 15746;
	}	
	return m[n];
}

int main() {
	m[1] = 1;
	m[2] = 2;

	cin >> n;	

	cout << dp(n);

	return 0;
}