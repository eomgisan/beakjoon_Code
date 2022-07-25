#include <iostream>
#include <utility>
#include <vector>
#include <math.h>



using namespace std;

struct point
{
    double x;
    double y;
};



bool isInside(point a, point b, double w, double h) {
    if ((b.x - a.x <= w) && (b.y - a.y <= h) && (b.x - a.x >= 0) && (b.y - a.y >= 0)) {
        return true;
    }
    else {
        double dist;
        if (b.x >= a.x + w) {
            dist = sqrt(pow(b.x - a.x - w, 2) + pow(b.y - a.y - (h / 2), 2));
            if (dist <= h / 2) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            dist = sqrt(pow(a.x-b.x , 2) + pow(b.y - a.y - (h / 2), 2));
            if (dist <= h / 2) {
                return true;
            }
            else {
                return false;
            }
        }
    }
}

int main() {
    
    double x, y, w, h, cnt;

    cin >> w >> h >> x >> y >> cnt;

    struct point o = { x,y };

    int resultCnt = 0;

    for (int i = 0; i < cnt; i++) {
        int a, b;
        cin >> a >> b;
        struct point p = { a,b };
        if (isInside(o, p, w, h)) {
            resultCnt++;
        }
    }

    cout << resultCnt;

}