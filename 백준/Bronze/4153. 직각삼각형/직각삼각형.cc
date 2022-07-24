#include <iostream>
#include <algorithm>


using namespace std;



int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	while (true) {
		cin >> a >> b >> c;
		if (a == b && b == c && c == 0) {
			break;
		}
		int max1 = max(a, (max(c, b)));
		if (max1 * max1 * 2 == a * a + b * b + c * c) {
			cout << "right" << "\n";
		}
		else {
			cout << "wrong" << "\n";
		}

	} 
	

	return 0;
}