#include <bits/stdc++.h>
using namespace std;
int n, arr[101], cnt, ans;
int main() {
	cin >> n;
	for(int i = 1; i <= n; i++) arr[i] = 1;
	while(cnt != 1) {
		cnt = 0;
		for(int i = 1; i <= n; i++) {
			if(arr[i]) {
				cnt++;
				if(cnt % 2) {
					arr[i] = 0;
					ans = i;
				}
			}
		}
	}
	cout << ans;

	
}
