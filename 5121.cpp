#include <bits/stdc++.h>
using namespace std;
int n, d, t, m = 123456789;
int main() {
	cin >> n;
	while(n--) {
		cin >> d >> t;
		if(d > t) continue;
		if(m > t) m = t;
	}
	if(m == 123456789) cout << -1;
	else cout << m;
}
