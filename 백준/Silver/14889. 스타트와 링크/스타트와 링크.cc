#include <iostream>
#include <vector>
using namespace std;

int result = 10000000;

int n;
int total = 0;
vector<vector<int>> S;
vector<bool> isUsed;

int cal(bool inTeamS) {
	int result = 0;
	for (int i = 0;i < n;i++) {
		if (isUsed[i] == inTeamS) {
			for (int j = 0;j < n;j++) {
				if (isUsed[j] == inTeamS) {
					result += S[i][j];
				}
			}
		}
	}
	return result;
}


void backTracking(int count, int start_index) {
	if (count == n/2) {
		int start = cal(true);
		int link = cal(false);
		int num = link - start > 0 ? link - start : start - link;
		if (num < result) {
			result = num;
			return;
		}
	}

	for (int i = start_index;i < n;i++) {
		if (!isUsed[i]) {
			isUsed[i] = true;
			backTracking(count + 1,i);
			isUsed[i] = false;
		}
	}
}


int main() {

	cin >> n;

	for (int i = 0; i < n;i++) {
		vector<int> temp;
		for (int j = 0;j < n;j++) {
			int num;
			cin >> num;
			temp.push_back(num);
			total += num;
		}
		S.push_back(temp);
		isUsed.push_back(false);
	}


	backTracking(0,0);

	cout << result;

	return 0;
}