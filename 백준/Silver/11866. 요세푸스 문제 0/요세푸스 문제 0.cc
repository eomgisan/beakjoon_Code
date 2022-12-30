#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	queue<int> circle;

	int n, k; cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		circle.push(i);
	}
	cout << '<';
	while (--n) {
		for (int i = 1;i < k;i++) {
			circle.push(circle.front());
			circle.pop();
		}
		cout << circle.front() << ", ";

		circle.pop();
	}

	cout << circle.front() << '>';
	circle.pop();

	return 0;
}