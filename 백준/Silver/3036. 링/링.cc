#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_gcd(int a, int b) {
	return a % b ? find_gcd(b, a % b) : b;
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> vi;

	int len;
	cin >> len;

	for (int i = 0;i < len;i++) {
		int num;
		cin >> num;
		vi.push_back(num);
	}

	for (int i = 1;i < len;i++) {
		int gcd = find_gcd(vi[0], vi[i]);
		
		cout << vi[0]/gcd << "/" << vi[i]/gcd << "\n";
	}



	return 0;
}