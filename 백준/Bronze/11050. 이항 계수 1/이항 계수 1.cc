#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_nCk(int n, int k) {
	if (n - k < k) {
		return find_nCk(n, n - k);
	}

	int M = 1, N = 1;
	for (int i = n;i > n - k;i--) {
		M *= i;
	}
	for (int i = 1;i <= k;i++) {
		N *= i;
	}

	return M / N;
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	cout << find_nCk(a, b);
	


	return 0;
}