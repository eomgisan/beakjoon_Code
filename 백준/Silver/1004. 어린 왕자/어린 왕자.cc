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

struct planet {
    point o;
    double r;
};

bool isInside(point a, point b, double r) {
    double dist = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    if (dist > r) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++) {
        point a, b;
        cin >> a.x >> a.y >> b.x >> b.y;

        int circleCnt;

        cin >> circleCnt;

        vector<planet> vp;
        for (int j = 0; j < circleCnt; j++) {
            double x, y, r;
            cin >> x >> y >> r;
            struct point o = { x,y };
            struct planet p = { o,r };
            vp.push_back(p);
            
        }

        int resultCnt = 0;
        for (auto it : vp) {
            if (isInside(a, it.o, it.r) && !isInside(b, it.o, it.r)) {
                resultCnt++;
            }
            else if (isInside(b, it.o, it.r) && !isInside(a, it.o, it.r)) {
                resultCnt++;
            }
        }

        cout << resultCnt << "\n";
    }


}