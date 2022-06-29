#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	cin >> num;

	vector<int>height;
	vector<int>weight;
	vector<int>rank;

	int h, w;
	for (int i = 0; i < num;i++) {
		cin >> h >> w;
		height.push_back(h);
		weight.push_back(w);
	}

	for (int i = 0;i < num;i++) {
		int Rank = 1;
		for (int j = 0;j < num;j++) {
			if (height[i] < height[j] && weight[i] < weight[j]) {
				Rank++;
			}
		}
		rank.push_back(Rank);
	}

	for (int r : rank) {
		cout << r << " ";
	}

	return 0;

}