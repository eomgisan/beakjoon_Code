#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int i;
	int n = 1;
	int m = 1;
	bool flag = true;
	for (i = 1; i < x; i++) {
		if ((n == 1) && flag) {
			m++;
			flag = false;
		}
		else if (( m == 1) && !flag) {
			n++;
			flag = true;
		}
		else if (flag) {
			n--;
			m++;
		}
		else if (!flag) {
			n++;
			m--;
		}


	}
	cout << n << "/" << m;
	return 0;
}