#include <iostream>

using namespace std;

void solution(int n)
{
    long long count_0_n1 = 0;
    long long count_1_n1 = 1;
    long long count_0_n2 = 1;
    long long count_1_n2 = 0;
    int i=2;
    if(n == 0)
    {
        cout << "1 0" << '\n';
        return;
    }
    if(n == 1)
    {
        cout << "0 1" << '\n';
        return;
    }
    while (i++<n)
    {
        long long temp_0 = count_0_n2;
        long long temp_1 = count_1_n2;
        count_0_n2 = count_0_n1;
        count_1_n2 = count_1_n1;
        count_0_n1 = temp_0 + count_0_n2;
        count_1_n1 = temp_1 + count_1_n2;
    }
    cout << count_0_n1 + count_0_n2 << " " << count_1_n1 +count_1_n2 << '\n';
    return;
}

int main()
{
    int testcase; cin >> testcase;
    while(testcase--)
    {
        int num; cin >> num;
        solution(num);
    }
    return 0;
}