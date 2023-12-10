#include <iostream>
#include <list>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    long long T;
    cin >> N >> K >> T;
    list<int> arr(N);
    list<int>::iterator iter;
    for(list<int>::iterator iter = arr.begin() ; iter != arr.end() ; ++iter)
    {
        int temp; cin >> temp;
        *iter = temp;
    }
    arr.sort(less<>()); 

    
    iter = arr.begin();
    
    while(K > 0 && iter != arr.end())
    {
        // 현재 iter의 값이 작을경우 증가
        if(*(iter) < T)
        {
            ++iter;
        }
        
        
        else
        {
            // 현재 iter이 값이 클경우 이전꺼 먹기

            // case 1 : 현재 iter이 begin일 경우 -> 먹을수 있는게 없으니 return
            if(iter == arr.begin()) K = 0;
            else{
                // case 2 : begin이 아닐경우 -> 이전꺼 먹기
                auto temp = iter--;
                auto before = iter;
                iter = temp;

                T += *(before);
                arr.erase(before);
                --K;
            }
            
        }
    }

    while(K-- > 0)
    {
        T += *(--iter);
    }

    cout << T;
    return 0;
}
