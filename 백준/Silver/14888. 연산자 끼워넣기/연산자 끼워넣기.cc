#include <iostream>
#include <vector>
using namespace std;

int mAx = -2000000000;
int mIn = 2000000000;

int n;
vector<int> arr;
int	oper[4] = { 0, };

int cal(int result, int num,int i) {
	switch (i) {
	case 0:
		result += num;
		break;
	case 1:
		result -= num;
		break;
	case 2:
		result *= num;
		break;
	case 3:
		result /= num;
		break;
	default:
		break;
	}
	return result;
}


void backTracking(int count, int result) {
	if (count == n) {
		if (result < mIn) {
			mIn = result;
		}
		if (result > mAx) {
			mAx = result;
		}
		return;
	}

	for (int i = 0;i < 4;i++) {
		if (oper[i] > 0) {
			oper[i]--;
			backTracking(count+1,cal(result, arr[count], i));
			oper[i]++;
		}
	}


}


int main() {

	cin >> n;

	for (int i = 0; i < n;i++) {
		int num;
		cin >> num;
		arr.push_back(num);
	}

	cin >> oper[0] >> oper[1] >> oper[2] >> oper[3];

	backTracking(1, arr[0]);

	cout << mAx << "\n" << mIn;

	return 0;
}