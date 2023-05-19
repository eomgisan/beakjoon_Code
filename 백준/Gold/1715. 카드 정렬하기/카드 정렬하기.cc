#include <iostream>
#include <queue>
using namespace std;

int N;


int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

	cin >> N;
	if (N == 1) {
		cout << "0";
		return 0;
	}

	priority_queue<int> pq;

	for (int i = 0; i < N; ++i) {
		unsigned int temp;
		cin >> temp;
		pq.push(-1*temp);
	}

	int result = 0;

	while (pq.size() >1) {
		int a = -1 * pq.top(); pq.pop();
		int b = -1 * pq.top(); pq.pop();

		pq.push(-1*(a + b));
		result += a + b;
	}

	cout << result;
	return 0;
}
