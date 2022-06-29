#include <iostream>
#include <vector>
using namespace std;

int main() {

	int m, n;
	cin >> m >> n;

	vector<string>chess;

	for (int i = 0; i < m;i++) {
		
		string s;
		cin >> s;
		chess.push_back(s);
	}



	int result = 64;
	for (int i = 0; i <= m - 8;i++) {
		for (int j = 0;j <= n - 8;j++) {
			int count = 0;

			for (int M = 0;M < 8;M += 2) {
				for (int N = 0;N < 8;N += 2) {
					if (chess[i + M][j + N] != chess[i][j]) {
						count++;
	
 					}
					if (chess[i + M + 1][j + N + 1] != chess[i][j]) {
						count++;
					}
							

					if (chess[i + M + 1][j + N] == chess[i][j]) {
						count++;
		
					}

					if (chess[i + M][j + N+1] == chess[i][j]) {
						count++;
					
					}
				}
			}

			if (64 - count < count) {
				count = 64 - count;
			}
			if (result > count) {
				result = count;
			}

		}
		
	}

	cout << result;
}