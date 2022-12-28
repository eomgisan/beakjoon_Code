#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	queue<int> que;
	
	int n; cin >> n;

	while (n--) {
		string s;
		cin >> s;
		if (s == "push") {
			int num;
			cin >> num;
			que.push(num);
		}
		else if (s == "pop") {
			if (que.empty()) cout << -1 << '\n';
			else {
				int num = que.front();
				cout << num << '\n';
				que.pop();
			}
		}
		else if (s == "size") {
			cout << que.size() << '\n';
		}
		else if (s == "empty") {
			if (que.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (s == "front") {
			if (que.empty()) cout << -1 << '\n';
			else {
				cout << que.front() << '\n';
			}
			
		}
		else if (s == "back") {
			if (que.empty()) cout << -1 << '\n';
			else {
				cout << que.back() << '\n';
			}
			
		}

	}

	return 0;
	
}