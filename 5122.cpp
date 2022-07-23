#include <iostream>
using namespace std;
int n, f, i, j, a[2505], dp[2505];
bool p[2505][2505];
int main() {
	cin >> n;
	for(i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(i = 1; i <= n; i++) {
		f = a[i];
		for(j = i + 1; j <= n; j++) {
			if(p[i][j - 1] == 1) {
				f = a[j];
			}
			else if(f == a[j]) p[i][j] = 1;
			else {
				if(f > a[j]) break;
				else f = a[j] - f;
			}
		}
	}
	dp[1] = 1;
	for(i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		for(j = 1; j <= i; j++) {
			if(p[j][i] && dp[i] > dp[j - 1] + i - j) {
				dp[i] = dp[j - 1] + i - j;
			}
		}
	}
	cout << dp[n];
	return 0;
}
