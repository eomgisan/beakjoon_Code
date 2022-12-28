#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	deque<int> deq;
	
	int n; cin >> n;
	for (int i = n; i >= 1; i--) {
		deq.emplace_back(i);
	}
	while (deq.size() != 1) {
		deq.pop_back();
		deq.push_front(deq.back());
		deq.pop_back();
	}

	cout << deq[0];
	return 0;
}