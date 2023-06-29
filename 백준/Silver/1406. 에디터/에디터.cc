#include <iostream>
#include <string>
#include <list>

using namespace std;



int main() {
    cin.tie(0);    cout.tie(0);    cin.sync_with_stdio(false);

    string s; cin >> s;

    list<char> cList;

    for (auto it : s) {
        cList.push_back(it);
    }

    list<char>::iterator cursor = cList.end();

    int commandCount; cin >> commandCount;
    while (commandCount--) {
        char cmd; cin >> cmd;

        switch (cmd)
        {
        case('L'):
            if (cursor != cList.begin()) cursor--;
           
            break;

        case('D'):
            if (cursor != cList.end()) cursor++;
           
            break;

        case('B'):
            if (cursor != cList.begin()) {
                cursor = cList.erase(--cursor);
            }
         
            break;

        case('P'):
            char temp; cin >> temp;
            cList.insert(cursor, temp);

            break;

        default:
            break;
        }
    }

    for (auto it : cList) {
        cout << it;
    }

    return 0;
}