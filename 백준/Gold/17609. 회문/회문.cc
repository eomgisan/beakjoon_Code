#include <iostream>
#include <string>
using namespace std;

bool palindrome(string::iterator front, string::iterator back)
{
    while(front < back)
    {
        if(*front != *back) return false;
        ++front; --back;
    }
    return true;
}

int solution(string& str)
{
    string::iterator front = str.begin();
    string::iterator back = str.end() - 1;
    

    while(front < back)
    {
        
        if(*front != *back)
        {
            if(*(front+1) == *back)
            {
                if(palindrome(front+1, back)) return 1;               
            }
            if(*front == *(back-1))
            {
                if(palindrome(front, back-1)) return 1;
            }
            
            
            return 2;
            
        }
        ++front; --back;
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int testcase; cin >> testcase;
    while(testcase--)
    {
        string str; cin >> str;

        cout << solution(str) <<'\n';
    }
    
    return 0;
}