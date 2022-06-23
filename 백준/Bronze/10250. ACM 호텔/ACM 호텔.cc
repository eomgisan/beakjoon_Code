#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int r, h, w, n;
	cin >> r;
	for (int i = 0; i < r; i++) {
		cin >> h >> w >> n;
		int result;
		int floor = n%h;
        if(floor == 0)
            floor = h;
		result = floor * 100 + ceil((double)n / h);
		
		cout << result << "\n";

	}
	return 0;
}