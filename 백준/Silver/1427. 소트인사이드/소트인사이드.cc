#include <iostream>
using namespace std;





int main() {
	int num;
	cin >> num;
	int len = 0;
	int arr[11] = { 0, };
	while (num > 0) {
		arr[len++] = num % 10;
		num /= 10;
	}

	for (int i = 0; i < len;i++) {
		for (int j = 0;j < len - i;j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++) {
		cout << arr[i];
	}


	return 0;
}