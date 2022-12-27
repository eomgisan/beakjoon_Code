#include <iostream>


using namespace std;

int metrix[1024][1025] = { 0, };


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N, M;

	cin >> N >> M;

	for (int i = 0; i < N;i++) {
		for (int j = 0;j < N;j++) {
			int input = 0;
			cin >> input;
			metrix[i][j + 1] = metrix[i][j] + input;
		}
	}
	
	while (M--) {
		int x, y, a, b;
		cin >> x >> y >> a >> b;

		int result = 0;
		for (int i=x-1; i <=a-1; i++) {
			result += metrix[i][b] - metrix[i][y-1];
		}
		cout << result << '\n';
	}

	return 0;
}