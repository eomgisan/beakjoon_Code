

#include <iostream>

using namespace std;
int main(){

	int total; cin >> total;
	int count; cin >> count;
	while (count--) {
		int charge, count; cin >> charge >> count;
		total -= charge * count;
	}
	if (total == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}