#include <iostream>
#include <math.h>
using namespace std;


int main() {
	double goal;
	cin >> goal;
	goal--;
	goal /= 6;
	
	int x = 0;
	x = ceil((-1 + sqrt(1 + 8 * goal))/2) +1;

	cout << x;
	return 0;
}

