#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<pair<int, int>> time;
	int start, end;
	for (int i = 0; i < N; i++) {
		cin >> start >> end;
		time.emplace_back(make_pair(end, start));
	}
	sort(time.begin(), time.end());

	end = time[0].first;
	int result = 1;
	for (int i = 1; i < N; i++) {
		if (end <= time[i].second) {
			result++;
			end = time[i].first;
		}
	}

	cout << result;
	return 0;
}