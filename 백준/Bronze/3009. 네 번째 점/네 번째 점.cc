#include <iostream>


using namespace std;



int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;


	cin >> x1 >> y1;
	cin >> x2 >> y2;

	int a, b;
	cin >> a >> b;


	if (x1 == x2) {
		a = a;
	}
	else if (x1 == a) {
		a = x2;
	}
	else {
		a = x1;
	}

	if (y1 == y2) {
		b = b;
	}
	else if (y1 == b) {
		b = y2;
	}
	else {
		b = y1;
	}

	cout << a << " " << b;

	

	return 0;
}