#include <iostream>
using namespace std;

int main(){

	int arr[6] = {1,1,2,2,2,8};

	for (int i = 0; i < 6; i++) {
		int temp = 0; cin >> temp;
		arr[i] -= temp;
	}
	
	for (int i = 0; i < 6; i++) {
		
		cout << arr[i] <<" ";
	}
}