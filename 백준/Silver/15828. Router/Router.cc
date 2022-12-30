#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	queue<int> router;

	
	int size; cin >> size;
	int num;
	while (true) {
		cin >> num;
		if (num == -1) break;
		else if (num == 0) {
			router.pop();
		}
		else {
			if (router.size() < size) {
				router.push(num);
			}
		}
	}
	if (router.size() == 0) {
		cout << "empty";
		return 0;
	}
	while(router.size() != 0) {
		cout << router.front() << " ";
		router.pop();
	}

	return 0;
}