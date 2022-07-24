#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;



int main() {

	ios::sync_with_stdio;
	cin.tie(0);

	int M = 0, N = 0;


	vector<string> vs;
	map<string, int> m;
	cin >> M >> N;

	for (int i = 0;i < M; i++) {
		string s;
		cin >> s;
		vs.push_back(s);
		m.insert(make_pair(s, i));
	}

	
	for (int i = 0;i < N; i++) {
		string s;
		cin >> s;
		if (s[0] - 'A' >= 0) {
			auto it = m.find(s);
			cout << it->second + 1 << "\n";			
		}
		else {
			int index = stoi(s);
			cout << vs[index - 1] << "\n";
			
		}
	}


	return 0;
}