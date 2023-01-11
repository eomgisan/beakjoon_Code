#include <iostream>

using namespace std;

const int modNum = 1000000007;

long long squrMod(long long a, long long b, long long c) {
	if (a == 1) {
		return 1;
	}
	if (a % c == 0) {
		return 0;
	}
	if (b == 1) {
		return a % c;
	}
	else {
		long long temp = a % c;
		temp *= temp;
		if (b % 2 == 0) return squrMod(temp, b / 2, c);
		else return (squrMod(temp % c, b / 2, c) * (a % c)) % c;
	}
}
long long nCk(long long n, long long k) {

	if (n - k < k) return nCk(n, n-k);
	if (k == 0) return 1;
	if (k == 1) return n % modNum;

	long long A = 1;

	for (long long i = 1; i <=n; i++) {
		A *= i;
		A %= modNum;
	}

	long long temp = 1;
	for (long long i = 1; i <= k; i++) {
		temp *= i;
		temp %= modNum;
	}
	for (long long i = 1;i <= n - k;i++) {
		temp *= i;
		temp %= modNum;
	}

	long long B = squrMod(temp, modNum - 2, modNum);

	return (A * B) % modNum;
}



int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int a, b;
	cin >> a >> b;
	cout << nCk(a, b);

	return 0;
}