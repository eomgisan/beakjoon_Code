#include <iostream>
using namespace std;

int isGroupWord(string s) {
	int alp[26] = { 0, };
	char past = '0';
	for (char ch : s) {
		if (alp[(int)ch - 'a'] == 0) {
			past = ch;
			alp[(int)ch - 'a']++;
		}
		else if (alp[(int)ch - 'a'] != 0 && past != ch) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int num;
	cin >> num;
	int result = 0;
	for (int i = 0; i < num;i++) {
		string s;
		cin >> s;
		result += isGroupWord(s);
	}
	cout << result;
	return 0;

}