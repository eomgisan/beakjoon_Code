
#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

	int N;
	cin >> N;
	vector<int> nums;

	for (int i = 0; i < N; i++) {
		int temp; cin >> temp;
		nums.push_back(temp);
	}

	int cash; cin >> cash;

	sort(nums.begin(), nums.end());

	int min = cash / N;
	int max = nums[N - 1];

	while (min <= max) {
		int mid = (min + max) / 2;
		int now = 0;
		for (auto it : nums) {
			now += mid > it ? it : mid;
		}
		if (now > cash) {
			max = mid-1;
		}
		else{
			min = mid+1;
		}
		
	}
	cout << max;
	return 0;
}


