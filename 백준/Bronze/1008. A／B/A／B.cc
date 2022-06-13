#include <iostream>
using namespace std;

// cout 의 소수점 출력 범위 : cout.precision(출력자릿수)
// 이때 precision은 유효숫자의 갯수에 따라 소수점 범위가 달라질수도 있으니 cout << fixed 를 같이 써서 소수점 범위 고정

// 허용오차가 10^-9 이하이므로 소수점 10번째까치는 출력해줘야한다.
// double형은 소수점 6번째까지만 출력한다!!

// 정수 / 정수 = 정수로만 출력되므로 a,b 중 하나는 double로 형변환 해서 출력물을 double로 만들어야함
// 형변환 방법 1 : (double)a;
// 형변환 방법 2 : double(a);

int main() {
	int a, b;
	cin >> a >> b;
    cout.precision(10);
    cout << fixed;
	cout << (double)a/(double)b << endl;
	return 0;
}
