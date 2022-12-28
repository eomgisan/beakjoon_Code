#include <iostream>
#include <vector>
#include <string>

#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	

	int count;
	cin >> count;
	vector<int> stack;
	while (count--) {	
		string command;
	
		cin >> command;
		

		if (command == "push") {
			int num;
			cin >> num;
			
			stack.emplace_back(num);
		}
		else if (command == "pop") {
			if (stack.size() == 0) cout << -1 << '\n';
			else {
				cout << stack.back() << '\n';
				stack.pop_back();
			}
		}
		else if (command == "size") {
			cout << stack.size() << '\n';
		}
		else if (command == "top") {
			if (stack.size() == 0) cout << -1 << '\n';
			else {
				cout << stack.back() << '\n';
			}
		}
		else {
			if (stack.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';

		}
	}
}