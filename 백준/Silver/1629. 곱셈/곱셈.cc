#include <iostream>

using namespace std;


int a, b, c;


long long mulmul(long long a, long long b, long long c) {
	if (a == 1) {
		return 1;
	}
	if (a % c == 0) {
		return 0;
	}
	if (b == 1){
		return a % c;
	}
	else {
		long long temp = a % c;
		temp *= temp;
		if (b % 2 == 0) return mulmul(temp, b / 2, c);
		else return (mulmul(temp%c, b / 2, c) * (a % c)) % c;
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


	cin >> a >> b>> c;
	cout << mulmul(a, b, c);

	return 0;
}