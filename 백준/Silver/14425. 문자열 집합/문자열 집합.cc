#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;




int main() {

	
	int num1 = 0;
	int num2 = 0;
	cin >> num1 >> num2;

	set<string> ss;


	for (int i = 0;i < num1; i++) {
		string s;
		cin >> s;
		ss.insert(s);
	}

	int count = 0;

	for (int i = 0;i < num2; i++) {
		string s;
		cin >> s;

		if(ss.end() != ss.find(s)) 
			count++;
	}


	cout << count;
	
	return 0;
}