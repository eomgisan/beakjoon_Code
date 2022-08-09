#include <iostream>
#include <vector>
#include <set>
#include <math.h>
using namespace std;

bool flag = false;
int zero_count = 0;
int filed[9][9] = { 0, };
vector<set<int>> square;
bool m[9][9] = { 0, };
bool n[9][9] = { 0, };
vector<pair<int, int>> zero_xy;

void dps(int count) {
	if (count == zero_count || flag) {

		for (int i = 0;i < 9;i++) {
			for (int j = 0;j < 9;j++) {
				cout << filed[i][j] << " ";
			}
			cout << "\n";
		}
		exit(0);
	}

	int x = zero_xy[count].first;
	int y = zero_xy[count].second;

	

	int square_index = (y / 3) * 3 + (x / 3);

	set<int> canNum = square[square_index];

	for (int i = 0;i < 9;i++) {
		if (m[x][i])
			canNum.erase(i + 1);
	}
	for (int i = 0;i < 9;i++) {
		if (n[y][i])
			canNum.erase(i + 1);
	}

	for (int num : canNum) {

		filed[x][y] = num;
		m[x][num - 1] = true;
		n[y][num - 1] = true;
		square[square_index].erase(num);

		dps(count + 1);

		n[y][num - 1] = false;
		m[x][num - 1] = false;
		square[square_index].insert(num);
		

	}

}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0;i < 9;i++) {
		square.push_back({ 1,2,3,4,5,6,7,8,9 });
	}

	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++) {
			int num;
			cin >> num;
			filed[i][j] = num;
			if (!num) {
				zero_count++;
				zero_xy.push_back(make_pair(i, j));
			}
			else {
				square[(j / 3) * 3 + (i / 3)].erase(num);
				m[i][num - 1] = true;
				n[j][num - 1] = true;
			}
		}
	}

	dps(0);

	
	return 0;
}