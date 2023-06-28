#include <iostream>
#include <vector>



using namespace std;

int icount[1000001] = { 0, };


int main() {
    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    vector<int> arr;
    int len; cin >> len;

    for (int i = 0; i < len;++i) {
        int temp; cin >> temp;
        ++icount[temp];
        arr.push_back(temp);
    }

    vector<int> iStack;
    vector<int> rst;
    
 
    for (int i = len - 1; i >= 0; --i) {
        
       while (iStack.size()) {
            if (icount[iStack.back()] <= icount[arr[i]]) iStack.pop_back();
            else {
                break;
            }
       }

       if (iStack.size() == 0)
       {
           rst.push_back(-1);
       }
       else {
           rst.push_back(iStack.back());
       }
       iStack.push_back(arr[i]);

    }

    for (int i = len - 1; i >= 0; --i) {
        cout << rst[i] << " ";
    }

    return 0;
}