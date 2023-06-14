#include <iostream>
#include <math.h>
using namespace std;

int rst = 0;

int _where(int len, int R, int C) {
	
	int rst = 0;
	if (len/2 <= R) rst += 2;
	if (len/2 <= C) rst += 1;
	return rst;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, R, C; cin >> N >> R >> C;
	int rst = 0;
	// R,C 가 몇번째에 있는지 몇사분면인지 확인한다.
	int len = pow(2, N);
	while (len > 1) {
		rst += len / 2 * len / 2 * _where(len, R, C);

		len /= 2;
		R %= len;
		C %= len;
	}
	cout << rst;
	return 0;
}