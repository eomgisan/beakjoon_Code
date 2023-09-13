#include <iostream>
#include <vector>
using namespace std;

int len;
int arr[1000];

int lis[1000];
int lisLen;

int insertIndex[1000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> len;
    lisLen = 0;

    int temp;
    for(int i=0;i<len;++i)
    {
        cin >> temp;
        arr[i] = temp;
        
        if(lisLen == 0)
        {
            lis[lisLen] = temp;
            lisLen++;
        }
        else
        {
            // 만약 아닐경우 lis에서 해당 넘버가 어디에 들어갈지 확인후 치환을 한다.
            // 만약 중간에서 해당 넘버보다 작은게 나오면 치환 안나오면 추가
            // 길이만 구할경우 이 방법이 해답이 될수 있는 이유
            // 1 : 중간이 치환되더라도 최종 결과에는 영향을 안준다.
            // 2 : 만약 lis의 길이 뿐만 아니라 원소들을 나열하고 싶다면 insert되는 index를 저장하는 배열을 만들어서 뒤에서부터 하나씩 뽑아내면된다.
            int index = lower_bound(lis, lis + lisLen, temp) - lis;
            if(index == lisLen) lisLen++;
            lis[index] = temp;

            insertIndex[i] = index;
        }
        
    }
    cout << lisLen << '\n';
    vector<int> resultArr;
    for(int j=len-1;j>=0 || lisLen > 0;j--)
    {
        if(insertIndex[j] == lisLen - 1)
        {
            resultArr.push_back(arr[j]);
            lisLen--;
        }
    }

    for(int i = resultArr.size() - 1 ; i>=0; i--)
    {
        cout << resultArr[i] << " ";
    }
    return 0;
}