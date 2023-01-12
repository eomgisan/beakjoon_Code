#include <iostream>
#include <vector>
using namespace std;
int n = 2;
vector<vector<long long>> cross(vector<vector<long long>> A, vector<vector<long long>> B) {
	vector<vector<long long>> rst;
	for (int i = 0; i < n;i++) {
		vector<long long> temp;
		for (int j = 0; j < n; j++) {
			temp.emplace_back(0);
		}
		rst.emplace_back(temp);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int o = 0; o < n; o++) {
				rst[i][j] += A[i][o] * B[o][j];

			}
			rst[i][j] %= 1000000007;
		}
	}

	return rst;
}

vector<vector<long long>> powM(vector<vector<long long>> A, long long k) {
	if (k == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n;j++) {
				A[i][j] %= 1000000007;
			}
		}
		return A;
	}


	if (k % 2 == 0) {
		return powM(cross(A, A), k / 2);
	}
	else {
		return cross(powM(cross(A, A), k / 2), A);
	}

}



int main() {
	long long n;
	cin >> n;
	if (n == 1) {
		cout << 1;
		return 0;
	}
	if (n == 2) {
		cout << 1;
		return 0;
	}
	if (n == 3) {
		cout << 2;
		return 0;
	}
	vector<vector<long long>> I;
	vector<long long> temp;
	vector<long long> temp2;
	temp.push_back(1);
	temp.push_back(1);

	temp2.push_back(1);
	temp2.push_back(0);

	I.push_back(temp);
	I.push_back(temp2);

	I = powM(I, n - 2);

	cout << (I[0][0] + I[0][1]) % 1000000007;
	return 0;
}