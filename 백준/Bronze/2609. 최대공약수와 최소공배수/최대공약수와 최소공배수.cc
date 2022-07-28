#include <iostream>


using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c;
	cin >> a >> b;

	c = a % b;
    
    int lcm = (a * b);
    
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}

	int gcd = b;

	lcm = lcm / gcd;

	cout << gcd << "\n" << lcm;
	return 0;
}