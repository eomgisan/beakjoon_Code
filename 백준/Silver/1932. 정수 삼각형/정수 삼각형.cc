#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    int n; cin >> n;
    vector<int> roat;
    roat.push_back(0);

    for (int i = 1; i <= n; i++) {
        vector<int> cost;
        for (int j = 0; j < i; j++) {
            int num; cin >> num;
            cost.push_back(num);

        }
        vector<int> temp;
        for (int j = 0; j < i; j++) {
            
            if (j == 0) {
                temp.push_back(roat[0]+cost[0]);
            }
            else if (j == (i - 1)) {
                temp.push_back(roat.back() + cost[j]);
            }
            else {
                temp.push_back(max(roat[j - 1] + cost[j], roat[j] + cost[j]));
            }
        }

        roat = temp;
    }

    sort(roat.begin(), roat.end());
    cout << roat.back();

        

    
    
    return 0;
}