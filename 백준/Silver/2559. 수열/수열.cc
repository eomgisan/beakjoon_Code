#include <vector>
#include <iostream>

using namespace std;


int main() {
    vector<int> nums;
    nums.emplace_back(0);
    int N, K;
    cin >> N >> K;

    int num;

    for (int i = 1; i <= K;i++) {
        cin >> num;
        nums.emplace_back(num + nums.back());
    }
    
   
    int max = nums[K];
    for (int i = K+1; i <= N; i++) {
        cin >> num;
        nums.emplace_back(num + nums.back());
        int temp = nums.back() - nums[i - K];
        max = max < temp ? temp : max;
    }
    
    cout << max;

    return 0;
}