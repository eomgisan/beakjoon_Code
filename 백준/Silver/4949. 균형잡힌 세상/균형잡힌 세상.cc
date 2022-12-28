#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<char> stack;

	char line[101];
	while (cin.getline(line, 101 ,'\n')) {
		if (line[0] == '.') break;
		for (char ch : line) {
			if (ch == '.') {
				if (stack.empty()) cout << "yes" << '\n';
				else cout << "no" << '\n';
				stack.clear();
				break;
			}
			else {
				if (ch == '(' || ch == ')') {
					if (!stack.empty() && stack.back() == '(' && ch == ')') stack.pop_back();
					else stack.emplace_back(ch);
				}
				else if (ch == '[' || ch == ']') {
					if (!stack.empty() && stack.back() == '[' && ch == ']') stack.pop_back();
					else stack.emplace_back(ch);
				}
			}
		}
		
	}
	return 0;
}