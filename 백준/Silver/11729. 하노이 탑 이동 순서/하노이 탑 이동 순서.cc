#include <iostream>
using namespace std;


int Count = 0;



void hanoi(int size, int now, int goal, int* a, int* b) {

	int move = 0;

	for (int i = 1; i < 4; i++) {
		if (i != now && i != goal) {
			move = i;
		}
	}

	if (size == 1) {

		
		a[Count] = now;
		b[Count] = goal;
		
		Count++;
	}
	else {

		hanoi(size - 1, now, move, a, b);


		hanoi(1, now, goal, a, b);


		hanoi(size - 1, move, goal, a, b);

	}
}

int main() {
	int size;
	cin >> size;

	int a[10000000];
	int b[10000000];

	hanoi(size, 1, 3, a, b);
	cout << Count << "\n";
	for (int i = 0; i < Count; i++) {
		cout << a[i] << " " << b[i] << "\n";
	}

}