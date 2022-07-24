#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;



int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int M = 0, N = 0;

	map<string, int> m;
	set<string> ss;
	cin >> M >> N;

	for (int i = 0;i < M; i++) {
		string s;
		cin >> s;
		m[s]++;
	}

	
	for (int i = 0;i < N; i++) {
		string s;
		cin >> s;
		if (m.count(s)) {
			ss.insert(s);
		}
	}

	cout << ss.size() << "\n";
	for (auto it : ss) {
		cout << it << "\n";
	}

	return 0;
}