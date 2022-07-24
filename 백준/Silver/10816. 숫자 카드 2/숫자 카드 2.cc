#include <iostream>
#include <map>
using namespace std;



int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int M = 0, N = 0;

	map<int, int> m;
	cin >> M;

	for (int i = 0;i < M; i++) {
		int num;
		cin >> num;
		m[num]++;
			
	}
	
	cin >> N;
	
	for (int i = 0;i < N; i++) {
		int num;
		cin >> num;
		cout << m[num] << " ";
	}


	return 0;
}