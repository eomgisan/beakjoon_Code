#include <iostream>
#include <set>
#include <vector>
using namespace std;


int main() {
	
	int num = 0;
	cin >> num;

	set<int> si;


	for (int i = 0;i < num; i++) {
		int card;
		cin >> card;
		si.insert(card);
	}

	vector<int> result;

	si.end()==si.find(2);
	cin >> num;

	for (int i = 0;i < num; i++) {
		int card;
		cin >> card;
		result.push_back(si.end() != si.find(card) ? 1 : 0);
	}


	for (int i = 0;i < num;i++) {
		cout << result[i] << " ";
	}
	
	return 0;
}