#include <iostream>
#include <algorithm>
using namespace std;
 
int N;
int arr[1000];
 
int main() {
 
    //입력
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
 
    //정렬
    sort(arr, arr + N);
    
    //결과값 구하기
    int res = 1;
    for (int i = 0; i < N; i++) {
        if (arr[i] > res) {
            break;
        }
        res += arr[i];
    }

    cout << res;
}