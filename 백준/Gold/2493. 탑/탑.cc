#include <iostream>
#include <vector>

using namespace std;



int main() {
    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    int count; cin >> count;

    vector<pair<int,int>> iStack;
    vector<int> rst;

    for (size_t i = 0; i < count; ++i) {
        int temp; cin >> temp;
        
        while (!iStack.empty() && iStack.back().second <= temp) {
            iStack.pop_back();
        }

        if (iStack.empty()) {
            rst.push_back(0);
        }
        else {
            rst.push_back(iStack.back().first);
        }

        iStack.push_back(make_pair(i+1, temp));
    }

    for (auto it : rst) {
        cout << it << " ";
    }


    return 0;
}