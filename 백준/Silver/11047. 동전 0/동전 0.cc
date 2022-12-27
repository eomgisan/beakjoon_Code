#include <iostream>


using namespace std;

int coins[10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, goal;
	cin >> N >> goal;

	int num;
	
	for (int i = 0; i < N; i++) {
		cin >> num;
		coins[i] = num;
	}
	int count = 0;
	for (int i = N-1;i >= 0;i--) {
		if (goal == 0) break;
 		if (coins[i] > goal) continue;

		count += goal / coins[i];
		goal %= coins[i];
	}
	cout << count;
	

	
}