#include <iostream>
#define MAX 10
using namespace std;


int n, m;
int arr[MAX] = { 0, };

void dfs(int cnt)
{
	if (cnt == m+1) {
		for (int i = 1;i <= m;i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}


	for (int i = 1; i<= n;i++) {
		{
			if (arr[cnt - 1] <= i) {
				arr[cnt] = i;
				dfs(cnt + 1);
			}
		}
	}	
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);


	cin >> n >> m;

	dfs(1);

	return 0;
}