#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


long long n, k;

bool check(long long mid) {

	long long count = 0;
	for (long long q = 1; q <= n; ++q) {
		count += mid / q > n ? n : mid / q;
	}
	if (count < k)  return true;
	return false;
}


long long findNum(long long start, long long end) {
	
	while (end > start) {
		long long mid = (end + start) / 2;

		if (check(mid)) start = mid + 1;
		else end = mid;
	}
	return start;	
}



int main(){


	cin >> n >> k;

	cout << findNum(1, k+1);
	
    return 0;
}