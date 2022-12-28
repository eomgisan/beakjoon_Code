#include <iostream>
#include <vector>
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
		stack.clear();
		string s;
		cin >> s;
		for (char ch : s) {
			if (stack.empty() && ch == ')') {
				stack.emplace_back(1);
				break;
			}
			if (stack.empty()) stack.push_back(0);
			else if (stack.back() == 0 && ch == ')') stack.pop_back();
			else if (ch == '(') stack.emplace_back(0);
			else stack.emplace_back(1);
		}
		if (stack.empty()) cout << "YES" << '\n';
		else cout << "NO" << '\n';

	}
	
}