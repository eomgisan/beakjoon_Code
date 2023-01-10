#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int len;

string quadTree(bool**& arr ,pair<int , int > a ,int size) {
	string result = "";
	bool temp = arr[a.second][a.first];
	if (size == 1) {
		result += temp ? "1" : "0";
		return result;
	}
	for (int i = a.second; i < a.second + size; ++i) {
		for (int j = a.first; j < a.first + size; ++j) {
			if ((temp ^ arr[i][j])) {
				result += "(";
				result += quadTree(arr, make_pair(a.first, a.second), size / 2);
				result += quadTree(arr, make_pair(a.first + size / 2, a.second), size / 2);
				result += quadTree(arr, make_pair(a.first, a.second + size / 2), size / 2);
				result += quadTree(arr, make_pair(a.first + size / 2, a.second + size / 2), size / 2);
				result += ")";
				return result;
			}
		}
	}
	result += temp ? "1" : "0";
	return result;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> len;

	bool** arr = new bool* [len];
	for (int i = 0; i < len; ++i) {
		arr[i] = new bool[len];
	}

	for (int i = 0; i < len; ++i) {
		string s; cin >> s;
		for (int j = 0;j < len;++j) {
			arr[i][j] = s[j] - '0';
		}
	}

	
	cout << quadTree(arr, make_pair(0, 0), len);


	return 0;
}