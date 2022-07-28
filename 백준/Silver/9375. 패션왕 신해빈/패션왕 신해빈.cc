#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

long long find_nCk(int n, int k) {
	if (n - k < k) {
		return find_nCk(n, n - k);
	}

	long long M = 1, N = 1;
	
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
	
	

	
	int testCase;
	cin >> testCase;
	while (testCase--) {
		int clothCnt;
		cin >> clothCnt;
		int result=1;
		map<string, int> ms;
		while (clothCnt--) {
			string first, second;
			cin >> first >> second;
			ms[second]++;
		}

		
		for (auto it : ms) {
			result *= it.second + 1;
		}
		
		
		
		cout << result-1 << "\n";
	}



	return 0;
}