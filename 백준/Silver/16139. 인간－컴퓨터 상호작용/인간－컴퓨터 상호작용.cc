#include <vector>
#include <string>
#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<vector<int>> list;
    string S;
    int count;
    cin >> S >> count;

    int len = S.size();
    for (int i = 1;i <= 26; i++) {
        vector<int> temp(len+1,0);
        list.emplace_back(temp);
    }

    

    for (int i = 0; i < len; i++) {
        int index = S[i] - 'a';
        for (int j = 0; j < 26; j++) {
            list[j][i + 1] = list[j][i];
        }
        list[index][i+1]++;
    }


    while (count--) {
        char ch;
        int start, end;
        cin >> ch >> start >> end;
        cout << list[ch - 'a'][end + 1] - list[ch - 'a'][start] << '\n';
    }


    return 0;
}