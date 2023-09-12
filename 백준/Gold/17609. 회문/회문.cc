#include <iostream>
#include <string>
using namespace std;

bool palindrome(const string& str, int left, int right)
{
    while(left < right)
    {
        if(str[left] != str[right]) return false;
        ++left; --right;
    }
    return true;
}

int solution(const string& str)
{
    //string::iterator front = str.begin();
    //string::iterator back = str.end() - 1;
    int left = 0;
    int right = str.length()-1;

    while(left < right)
    {
        if(str[left] != str[right])
        {
            if(str[left+1] == str[right])
            {
                if(palindrome(str, left+1, right)) return 1;               
            }
            if(str[left] == str[right-1])
            {
                if(palindrome(str, left, right-1)) return 1;
            }

            return 2;
            
        }
        ++left; --right;
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase; cin >> testcase;
    while(testcase--)
    {
        string str; cin >> str;

        cout << solution(str) <<'\n';
    }
    
    return 0;
}