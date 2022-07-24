#include <bits/stdc++.h>
using namespace std;
int n, k;
int main() {
	cin >> n >> k;
	int m = k * (k + 1) / 2;
	if(n < m) cout << -1;
	else if((n-m)%k != 0) cout << k;
	else cout << k - 1;
}
