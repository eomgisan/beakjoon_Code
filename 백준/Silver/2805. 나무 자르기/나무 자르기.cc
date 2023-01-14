#include <iostream>
#include <vector>
using namespace std;

vector<long long> list;
long long k;



long long findNum(long long start, long long end) {
	
	while (end >= start) {
		long long mid = (end + start) / 2;

		long long temp = 0;

		for (auto it : list) {
			temp += it - mid > 0 ? it - mid : 0;
			if (temp >= k) break;
		}
		if (temp >= k) start = mid + 1;
		else end = mid - 1;
	}
	return end;	
}



int main(){



	int n; cin >> n >> k;

	
	long long temp = 0;
	long long max = -1;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		max = max > temp ? max : temp;
		list.emplace_back(temp);
	}

	cout << findNum(1, max);
    return 0;	
}