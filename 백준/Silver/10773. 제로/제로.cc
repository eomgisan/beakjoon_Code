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
	int result = 0;
	while (count--) {	
		int num;
		cin >> num;
		if (num == 0) {
			result -= stack.back();
			stack.pop_back();
		}
		else {
			stack.emplace_back(num);
			result += num;
		}
	}
	cout << result;
}