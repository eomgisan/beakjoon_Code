#include <iostream>
#include <vector>

using namespace std;

int Max=0;

bool isSimillar(int sum, int goal, int& max) {
	if (goal >= sum && sum > max ) {
		max = sum;
		return true;
	}
	else {
		return false;
	}
}


int main() {
	int n, goal;
	cin >> n >> goal;

	vector<int>card;
	int num;
	for (int i = 0; i < n;i++) {
		cin >> num;
		card.push_back(num);
	}
	for (int i = 0;i < n - 2;i++) {
		for (int j = i + 1;j < n - 1;j++) {
			for (int k = j + 1;k < n;k++) {
				isSimillar(card[i] + card[j] + card[k], goal, Max);
			}
		}
	}
	cout << Max;
	return 0;
}