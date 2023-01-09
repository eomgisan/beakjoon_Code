#include <iostream>
#include <deque>
using namespace std;




int main() {
	
	int deque_size, test_case; cin >> deque_size >> test_case;
	deque<int> deq;
	for (int i = 0; i < deque_size; ++i) {
		deq.push_back(i + 1);
	}
	
	
	int result = 0;
	while (test_case--) {
		int num; cin >> num;
		int index = 0;
		for (index = 0; index < deq.size(); ++index) {
			if (deq[index] == num) break;
		}
		if (index > deq.size() / 2) {
			index = deq.size() - index;
			while (index--) {
				deq.push_front(deq.back());
				deq.pop_back();
				result++;
			}
			deq.pop_front();
		}
		else {
			while (index--) {
				deq.push_back(deq.front());
				deq.pop_front();
				result++;
			}
			deq.pop_front();
		}
	}

	cout << result;
	return 0;
}