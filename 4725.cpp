#include <bits/stdc++.h>
using namespace std;
int n, ans, d[100001], e[100001];
long long int sum[100001];
vector<int> dot;
int main() {
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		sum[i] = sum[i - 1] + x; 
	}
	if(sum[n] % 4) {
		cout << 0;
		return 0;
	}
	for(int i = 1; i <= n; i++) {
		if(sum[i] == sum[n] / 4) d[i] = d[i-1] + 1;
		else d[i] = d[i - 1];
	}
	for(int i = n - 1; i >= 1; i--) {
		if(sum[i] == sum[n] / 4 * 3) e[i] = e[i + 1] + 1;
		else e[i] = e[i + 1];
	}
	for(int i = 2; i < n; i++) {
		if(sum[i] == sum[n] / 4 * 2) {
			ans += d[i-1] * e[i + 1];
		}
	}	
	cout << ans;
}
