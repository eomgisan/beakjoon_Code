#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int testcase; cin >>testcase;

    while(testcase--)
    {
        vector<string> arr;
        int arrLen; cin >>arrLen;

        for(int i=0;i<arrLen;i++)
        {
            string temp; cin >>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());

        bool flag = true;
        int idx = 0;
        while(idx <arrLen-1)
        {
            if(!(arr[idx].size() > arr[idx+1].size()))
            {
                if(arr[idx] == arr[idx+1].substr(0,arr[idx].size()))
                {
                    flag = false;
                    break;
                }
            }
            idx++;
        }
        if(flag)
        {
            cout << "YES" <<'\n';
        }
        else
        {
            cout << "NO" <<'\n';
        }
    }
    return 0;
}