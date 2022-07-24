#include <iostream>
#include <map>

using namespace std;



int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int M = 0, N = 0;

	map<int, int> m;
	
	cin >> M >> N;

	for (int i = 0;i < M; i++) {
		int num;
		cin >> num;
		m[num]++;
	}

	int count = 0;
	
	for (int i = 0;i < N; i++) {
		int num;
		cin >> num;
		if (m.count(num)) {
			count++;
		}
	}

	cout << M + N - count*2;
	

	return 0;
}