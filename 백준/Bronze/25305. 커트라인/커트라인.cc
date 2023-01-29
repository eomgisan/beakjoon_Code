#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, idx; cin >> n >> idx;

	vector<int> arr;
	while (n--) {
		int temp; cin >> temp;
		arr.emplace_back(temp);
	}
	sort(arr.begin(), arr.end(), greater<int>());

	cout << arr[idx - 1];

	return 0;
}