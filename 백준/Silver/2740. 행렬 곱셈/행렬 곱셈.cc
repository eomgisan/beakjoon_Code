#include <iostream>
using namespace std;


long long innerProduct(long long**A, long long**B, int m, int n, int o) {
	long long rst = 0 ;
	for (int i = 0; i < o;i++) {
		rst += A[m][i] * B[i][n];
	}
	return rst;
}

void crossProduct(long long** R, long long** A, long long** B, int m, int n , int o) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			R[i][j] = innerProduct(A, B, i, j, o);
		}
	}

}

void printMetrix(long long** R, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << R[i][j] << " ";
		}
		cout << '\n';
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int m1, m2, n1, n2;
	cin >> m1 >> n1;

	long long** A = new long long* [m1];
	for (int i = 0; i < m1; i++) {
		long long* temp = new long long[n1];
		A[i] = temp;
	}

	for (int i = 0; i < m1; i++) {
		long long temp;
		for (int j = 0; j < n1; j++) {
			cin >> temp;
			A[i][j] = temp;
		}
	}


	cin >> m2 >> n2;


	long long** B = new long long* [m2];
	for (int i = 0; i < m2; i++) {
		long long* temp = new long long[n2];
		B[i] = temp;
	}

	for (int i = 0; i < m2; i++) {
		long long temp;
		for (int j = 0; j < n2; j++) {
			cin >> temp;
			B[i][j] = temp;
		}
	}

	long long** R = new long long* [m1];
	for (int i = 0; i < m1; i++) {
		long long* temp = new long long[n2];
		R[i] = temp;
	}

	crossProduct(R, A, B, m1, n2, n1);

	printMetrix(R, m1, n2);

	for (int i = 0; i < m1; ++i) {
		delete[] A[i];
	}
	delete[] A;
	
	for (int i = 0; i < m2; ++i) {
		delete[] B[i];
	}
	delete[] B;

	for (int i = 0; i < m1; ++i) {
		delete[] R[i];
	}
	delete[] R;

	return 0;
}