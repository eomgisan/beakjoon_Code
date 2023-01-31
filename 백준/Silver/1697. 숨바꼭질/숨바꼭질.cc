#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n, goal; cin >> n >> goal;
	int rst = 0;
	if (goal <= n) rst = n-goal;
	else {
		queue<int> que;
		int cnt[100001] = { 0, };
		que.push(n);
		
		while (!que.empty()) {
			int temp = que.front();
			que.pop();
			
			if (temp == goal) {
				rst = cnt[temp];
				break;
			}
			if (temp + 1 <= 100000 && cnt[temp+1] == 0) {
				que.push(temp + 1);
				cnt[temp + 1] = cnt[temp] + 1;
			}
			if (temp - 1 >= 0 && cnt[temp - 1] == 0) {
				que.push(temp - 1);
				cnt[temp - 1] = cnt[temp] + 1;
			}
			if (temp * 2 <= 100000 && cnt[temp*2] == 0) {
				que.push(temp * 2);
				cnt[temp * 2] = cnt[temp] + 1;
			}
			
			
		}
	}
	cout << rst;

	return 0;
}