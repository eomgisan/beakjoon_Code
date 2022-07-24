#include <iostream>
#include <set>
#include <string>

using namespace std;



int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	set<string> ss;

	string s;
	cin >> s;

	for (int i = 1; i <= s.length();i++) {
		for (int j = 0;j <= s.length() - i;j++) {
			string temp = s.substr(j, i);
			ss.insert(temp);
		}
	}

	cout << ss.size();



	

	return 0;
}