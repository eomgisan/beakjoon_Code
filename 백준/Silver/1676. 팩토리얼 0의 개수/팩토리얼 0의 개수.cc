#include <iostream>


using namespace std;


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	

	
	int num;
	cin >> num;

	int count = 0;

	for (int i = 1;i <= num;i++) {
		if (i % 5 == 0)
			count++;
		if (i % 25 == 0)
			count++;
		if (i % 125 == 0)
			count++;
	}

	cout << count;


	return 0;
}