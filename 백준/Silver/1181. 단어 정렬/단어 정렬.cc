#include <iostream>
#include <set>
using namespace std;

struct myOrder
{
	bool operator() (const string& left, const string& right) const
	{
		if (left.size() == right.size()) {
			return left < right;
		}
		else {
			return left.size() < right.size();
		}
	}
};


int main() {

	set<string, myOrder> ss;
	int num = 0;
	cin >> num;

	for (int i = 0;i < num; i++) {
		string s;
		cin >> s;
		ss.insert(s);
	}

	

	for (string s : ss) {
		cout << s << "\n";
 	}

	return 0;
}