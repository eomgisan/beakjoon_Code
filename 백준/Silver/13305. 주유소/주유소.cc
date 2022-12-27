#include <iostream>
#include <vector>

#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int city;
	cin >> city;

	vector<long long> len;
	vector<long long> pay;

	long long temp;

	for (int i = 0; i < city - 1; i++) {
		cin >> temp;
		len.emplace_back(temp);
	}
	for (int i = 0; i < city; i++) {
		cin >> temp;
		pay.emplace_back(temp);
	}

	long long now = 10000000001;
	long long result = 0;
	for (int i = 0; i < city-1; i++) {
		if (now > pay[i]) now = pay[i];
		result += now * len[i];
	}

	cout << result;
	return 0;
}