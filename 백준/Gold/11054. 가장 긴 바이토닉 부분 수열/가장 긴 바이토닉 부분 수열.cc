#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int n; cin >> n;
    vector<int> arr;
    int lowerL[1002] = { 0, };
    int biggerL[1002] = { 0, };
    arr.emplace_back(0);
    
    lowerL[0] = -1;
    biggerL[0] = -1;

    for (int i = 1;i <= n;i++) {
        int num; cin >> num;
        arr.emplace_back(num);
        int lower_index = 0;
        int bigger_index = 0;
        for (int j = 1; j < i;j++) {
            if ((arr[j] < arr[i]) && (lowerL[j] > lowerL[lower_index])){
                lower_index = j;
            }
            else if ((arr[j] > arr[i]) && (biggerL[j] > biggerL[bigger_index])) {
                bigger_index = j;
            }
            lowerL[i] = (lowerL[lower_index]+1);
            biggerL[i] = (biggerL[bigger_index]+1);
        }
    }

    int lowerR[1002] = { 0, };
    int biggerR[1002] = { 0, };

    lowerR[n + 1] = -1;
    biggerR[n + 1] = -1;


    for (int i = n;i > 0;i--) {
        int lower_index = n+1;
        int bigger_index = n+1;
        for (int j = n; j > i;j--) {
            if ((arr[i] > arr[j]) && (lowerR[j] > lowerR[lower_index])) {
                lower_index = j;
            }
            else if ((arr[j] > arr[i]) && (biggerR[j] > biggerR[bigger_index])) {
                bigger_index = j;
            }
            lowerR[i] =(lowerR[lower_index] + 1);
            biggerR[i] =(biggerR[bigger_index] + 1);
        }
    }

    vector<int>case_ud(1002,0);
    vector<int>case_u(1002, 0);
    vector<int>case_d(1002, 0);
    for (int i = 0;i <= n;i++) {
        case_ud[i] = lowerL[i] + lowerR[i]+1;
        case_u[i] = lowerL[i] + biggerR[i]+1;
        case_d[i] = biggerL[i] + lowerR[i] + 1;
    }

    sort(case_ud.begin(), case_ud.end());
    sort(case_u.begin(), case_u.end());
    sort(case_d.begin(), case_d.end());
    int mAx1 = case_ud[1001];
    int mAx2 = case_u[1001];
    int mAx3 = case_d[1001];

    cout << max(mAx1, max(mAx2, mAx3));
    
    return 0;
}