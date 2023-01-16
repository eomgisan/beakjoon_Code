#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


vector<long long> chartX;
int house, wifi;

bool check(long long mid) {
	int count = 1;
	int before_index = 0;
	for (int i = 1; i < house; i++) {
		if (count > wifi) {
			return true;
		}
		if (chartX[i] - chartX[before_index] >= mid) {
			++count;
			before_index = i;
		}
	}
	
	if (count < wifi) return false;
	return true;
}


long long findNum(long long start, long long end) {
	
	while (end >= start) {
		long long mid = (end + start) / 2;

		if (check(mid)) start = mid + 1;
		else end = mid - 1;
	}
	return end;	
}



int main(){



	// 집의 갯수와 공유기 갯수가 주어진다.

	// 각집의 좌표를 준다.

	// 공유기를 연결할때 가장 길게 연결할수 있는 경우를 구한다.

	// 적합한 거리를 이분탐색으로 찾는다. 

	// 거리는 1부터 (최대 - 최소 ) / wifi +1 <- 이게 맞나?  모든 거리를 계산하고 그 거리로 탐색해야하나?

	// 그럼 각 거리별로 알고리즘은 어떻게 해야할까

	// 짧은쪽으로 이분을 할거면 부족하다는 뜻 ( 최소부터 설정된 거리만큼 올라갔는데 최대가 안된경우인가? )
	// 최소를 거리로잡았어 그럼 그 이후에는?최소보다 크게잖아 그걸 어찌계산해?

	// 긴쪽으로 이분을 할거면 충분하다는 뜻
	cin >> house >> wifi;

	
	for (int i = 0; i < house; i++) {
		int temp; cin >> temp;

		chartX.emplace_back(temp);
	}
	
	sort(chartX.begin(), chartX.end());

	cout << findNum(1, (chartX[house - 1] - chartX[0] + wifi) / (wifi-1));
	
    return 0;
}