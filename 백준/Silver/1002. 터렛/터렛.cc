#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	double a, b, r1, x, y, r2;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {

		cin >> a >> b >> r1 >> x >> y >> r2;

		double dist = sqrt((a - x) * (a - x) + (b - y) * (b - y));

		double maxR = max(r1, max(r2, dist));

		if (a == x && b == y) {
			if (r1 == r2) {
				cout << "-1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else {
			if (maxR*2 < r1 + r2+dist) {
				cout << "2" << "\n";
			}
			else if (maxR*2 == r1 + r2+dist) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
	}

	
	

	return 0;
}