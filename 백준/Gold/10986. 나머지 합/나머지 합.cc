#include <vector>
#include <iostream>

using namespace std;

long long modCount[1001] = { 0, };

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<long long> modList;
    modList.emplace_back(0);

    int N, M;
    cin >> N >> M;

    long long num;
    while (N--) {
        cin >> num;
        modList.emplace_back(modList.back() + num);
        modList.back() %= M;
        modCount[modList.back()]++;
    }
    long long count = modCount[0];

    for (int i = 0; i < M;i++) {
        count += (modCount[i] * (modCount[i] - 1)) / 2;
    }
    cout << count;


    return 0;
}