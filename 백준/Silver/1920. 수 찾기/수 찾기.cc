#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> list;

int find(int num, int start, int end) {
	while (end >= start) {
		int mid = (end + start) / 2;

		if (list[mid] > num) {
			end = mid-1;
		}
		else if (list[mid] < num) {
			start = mid + 1;
		}
		else {
			return 1;
		}
	}
	return 0;
}


int main() {
	cin.tie(0);
	cout.tie(0);
	cin.sync_with_stdio(false);
	int listlen = 0; cin >> listlen;
	
	for (int i = 0; i < listlen; i++) {
		int num; cin >> num;
		list.push_back(num);
	}
	sort(list.begin(), list.end());

	int quarylen = 0; cin >> quarylen;
	

	for (int i = 0; i < quarylen; i++) {
		int temp; cin >> temp;
		cout << find(temp,0,listlen-1) << '\n';
	}

	return 0;
}