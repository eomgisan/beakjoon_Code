#include <iostream>


using namespace std;

int B[2001][2001] = { 0, };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, K;
	cin >> N >> M >> K;

	char ch;

	for (int i = 1; i <= N;i++) {
		for (int j = 1;j <= M; j++) {
			cin >> ch;
			if (ch == 'B' && (i+j) % 2 == 0) {
				B[i][j] = B[i - 1][j] + B[i][j - 1] - B[i - 1][j - 1];
			}
			else if (ch == 'W' && (i + j) % 2 == 1) {
				B[i][j] = B[i - 1][j] + B[i][j - 1] - B[i - 1][j - 1];
			}
			else {
				B[i][j] = B[i - 1][j] + B[i][j - 1] - B[i - 1][j - 1] + 1;
			}
		}
	}


	int min = 4000001;
	int temp = 0;
	for (int i = 0; i <= N - K; i++) {
		for (int j = 0;j <= M - K;j++) {
			temp = B[i + K][j + K] - B[i][j+K] - B[i+K][j] + B[i][j];
			temp = K * K - temp > temp ? temp : K * K - temp;
			min = temp < min ? temp : min;
		}
	}
	cout << min << '\n';
	return 0;
}