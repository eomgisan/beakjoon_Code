#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>arr;
	for (int i = 0;i < n;i++) {
		int m;
		cin >> m;
		arr.push_back(m);
	}

	for (int i = 0;i < n;i++) {
		for (int j = i;j < n;j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i : arr) {
		cout << i << "\n";
	}

	return 0;
}