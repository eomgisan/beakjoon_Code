#include <iostream>


using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	double r;

	cin >> r;	

	double ans1= r*r*3.1415926535897932, ans2 = r*r*2;

	cout << fixed;
	cout.precision(6);
	cout << ans1 << "\n" << ans2;
	return 0;
}