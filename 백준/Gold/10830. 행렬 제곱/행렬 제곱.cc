#include <iostream>
#include <vector>
using namespace std;

int n;



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
			rst[i][j] %= 1000;
		}
	}

	return rst;
}

vector<vector<long long>> powM(vector<vector<long long>> A, long long k) {
	if (k == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n;j++) {
				A[i][j] %= 1000;
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


void printMetrix(vector<vector<long long>> A) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << '\n';
	}
}

int main() {
	long long k = 0;
	cin >> n >> k;

	vector<vector<long long>> M;

	for (int i = 0; i < n;i++) {
		vector<long long> temp;
		int num;
		for (int j = 0; j < n; j++) {
			cin >> num;
			temp.emplace_back(num);
		}
		M.emplace_back(temp);
	}

	printMetrix(powM(M, k));
	

	return 0;
}