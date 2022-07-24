#include <iostream>


using namespace std;



int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y, w, h;

	cin >> x >> y >> w >> h;


	int a, b;
	w / 2 < x ? a = w - x : a = x;
	h / 2 < y ? b = h - y : b = y;

	cout << (a > b ? b : a);


	

	return 0;
}