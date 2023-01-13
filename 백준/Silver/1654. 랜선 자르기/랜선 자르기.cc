#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool icount(long len, int k);

vector<long> list;

long ifind(int n, long start, long end) {
	int mid = (end + start) / 2;
	while (end >= start) {
		long mid = (end + start) / 2;
		
		if (!icount(mid,n)) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return end;
}


bool icount(long len, int k) {
	int rst = 0;
	for (auto it: list) {
		rst += (int)(it / len);
		if (rst >= k) return true;
	}
	return false;
}



int main() {
	cin.tie(0);	cout.tie(0);cin.sync_with_stdio(false);
	
	int n, k; cin >> k >> n;
	long max = -1;
	for (int i = 0; i < k; ++i) {
		long temp; cin >> temp;
		max = max > temp ? max : temp;
		list.emplace_back(temp);
	}

	cout << ifind(n, 1, max);
	

	return 0;
}