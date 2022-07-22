#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct point {
	int x;
	int y;
};

typedef struct point point;

bool compare(point p1, point p2) {
	return (p1.x == p2.x ? p1.y < p2.y : p1.x < p2.x);
}

int main() {
	int num;
	cin >> num;

	vector<point> vp;

	for (int i = 0; i < num; i++) {
		int x, y;
		cin >> x >> y;
		point p = { x,y };
		vp.push_back(p);
	}

	
	sort(vp.begin(), vp.end(), compare);
	
	

	for (int i = 0; i < num;i++) {
		cout << vp[i].x << " " << vp[i].y << "\n";
 	}

	return 0;
}