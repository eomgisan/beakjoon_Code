#include <iostream>
using namespace std;



int main() {
	
	int n;

	cin >> n;
	int q = 2;
	int i = q;
	while (i*i<=n) {
		for (i = q; i * i <= n; i++) {
			if (n % i == 0) {
				q = i;
				n /= q;
				cout << q << "\n";
				break;
			}
		}
	}
    if(n==1){
        return 0;
    }
    else{
        cout << n;

	return 0;
    }
}