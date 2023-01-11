#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int len;
int alpha = 0;
int beta = 0;
int gamma = 0;


void quadTree(int**& arr ,pair<int , int > a ,int size) {
	
	int temp = arr[a.second][a.first];
	if (size == 1) {
		switch(temp) {
		case -1:
			alpha++;
			break;
		case 0:
			beta++;
			break;
		case 1:
			gamma++;
			break;
		default:
			cout << "exception" << '\n';
			break;
		}
		return;
	}
	for (int i = a.second; i < a.second + size; ++i) {
		for (int j = a.first; j < a.first + size; ++j) {
			if ((temp ^ arr[i][j])) {
				
				quadTree(arr, make_pair(a.first, a.second), size / 3);
				quadTree(arr, make_pair(a.first + size / 3, a.second), size / 3);
				quadTree(arr, make_pair(a.first + (size * 2) / 3, a.second), size / 3);
				
				quadTree(arr, make_pair(a.first, a.second + size / 3), size / 3);
				quadTree(arr, make_pair(a.first + size / 3, a.second + size / 3), size / 3);
				quadTree(arr, make_pair(a.first + (size * 2) / 3, a.second + size / 3), size / 3);

				quadTree(arr, make_pair(a.first, a.second + (size * 2) / 3), size / 3);
				quadTree(arr, make_pair(a.first + size / 3, a.second + (size * 2) / 3), size / 3);
				quadTree(arr, make_pair(a.first + (size * 2) / 3, a.second + (size * 2) / 3), size / 3);
				
				return;
			}
		}
	}

	switch (temp) {
	case -1:
		alpha++;
		break;
	case 0:
		beta++;
		break;
	case 1:
		gamma++;
		break;
	default:
		cout << "exception" << '\n';
		break;
	}

	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	
	cin >> len;

	int** arr = new int* [len];

	for (int j = 0; j < len;j++){
		int* temp = new int[len];
		int num;
		for (int i = 0; i < len; i++) {
			cin >> num;
			temp[i] = num;
		}
		arr[j] = temp;
	}

	quadTree(arr, make_pair(0, 0), len);
	
	cout << alpha << '\n' << beta << '\n' << gamma << '\n';
	
	for (int j = 0; j < len; j++) {
		delete[] arr[j];
	}
	delete[] arr;
	return 0;
}