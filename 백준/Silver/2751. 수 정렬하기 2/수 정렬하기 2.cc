#include <iostream>

using namespace std;


void merge(int left, int mid, int right, int *arr) {
	int i, j, k;
	i = left;
	j = mid + 1;
	k = 0;
    
	int* temp = new int[right-left+1];
	while (i <= mid && j <= right) {
		if (arr[i] > arr[j]) {
			temp[k++] = arr[j++];
		}
		else {
			temp[k++] = arr[i++];
			
		}		
	}
	if (i == mid+1) {
		while (j != right+1) {
			temp[k++] = arr[j++];
		}
	}
	else {
		while (i != mid+1) {
			temp[k++] = arr[i++];
		}
	}

	k = 0;

	for (i = left;i <= right;i++) {
		arr[i] = temp[k++];

	}
	delete[] temp;
}

void merge_sort(int left, int right, int* arr) {
	
	if (left < right) {
		int mid = (left + right) / 2;
		merge_sort(left, mid, arr);
		merge_sort(mid+1,right,arr);
		merge(left, mid, right, arr);
	}
}

int main(){
	int n = 0;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0;i < n;i++) {
		int a = 0;
		cin >> a;
		arr[i] = a;
	}

	merge_sort(0, n-1, arr);

	for (int i = 0;i < n;i++) {
		cout << arr[i] << "\n";
	}

	delete[] arr;


	return 0;
}