#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string input; cin >> input;
  vector<string> arr;
  while(input.length() > 0)
  {
    arr.push_back(input);

    input = input.substr(1);
  }

  sort(arr.begin(),arr.end());

  for(auto it:arr)
  {
    cout << it << '\n';
  }
  return 0;
}