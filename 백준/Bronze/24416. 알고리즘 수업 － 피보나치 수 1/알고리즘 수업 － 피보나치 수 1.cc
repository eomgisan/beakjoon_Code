#include <iostream>
#include <vector>
using namespace std;


int code1 = 0;
int code2 = 0;



int fib1(int n) {
	
	if (n == 1 || n == 2) {
		code1++;
		return 1;
	}
	return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n) {
	int* fib = new int[n+1];
	fib[1] = 1;
	fib[2] = 1;
	for (int i = 3;i <= n;i++) {
		code2++;
		fib[i] = fib[i - 2] + fib[i - 1];
	}
	
	return fib[n];
}

int main() {
	
	int n;
	cin >> n;

	fib1(n);
	fib2(n);

	cout << code1 << " " << code2;


	

	return 0;
}