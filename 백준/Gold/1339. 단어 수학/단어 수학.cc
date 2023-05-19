#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int N;


int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

	cin >> N;


	int alpha[26] = { 0, };

	for (int i = 0; i < N;++i) {
		string str;
		cin >> str;

		int pow = 1;

		for (int j = str.size()-1; j >=0; --j) {
			
			alpha[str[j] - 'A'] += pow;
			pow *= 10;
		}

	}

	sort(alpha, alpha + 26, greater<>());

	int result = 0;

	for (int i = 0; i < 10 && alpha[i] != 0; ++i) {
		result += alpha[i] * (9-i);
	}

	cout << result;
	return 0;
}
