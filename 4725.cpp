#include <bits/stdc++.h>
using namespace std;
int n, ans, arr[100001];
long long int sum[100001];
vector<int> dot;
bool check() {
	bool flag = 1;
	if(sum[dot[0]] == sum[dot[1]] - sum[dot[0]]) {
		if(sum[dot[1]] - sum[dot[0]] == sum[dot[2]] - sum[dot[1]]) {
			if(sum[dot[2]] - sum[dot[1]] == sum[n] - sum[dot[2]]);
			else flag = 0;
		}
		else flag = 0;
	}
	else flag = 0;
	return flag;
}
void bt(int num) {
	if(dot.size() == 3) {
		ans += check();
		return;
	}
	for(int i = num + 1; i < n; i++) {
		dot.push_back(i);
		bt(i);
		dot.pop_back();
	}
}
int main() {
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	cin >> n;
	for(int i = 1; i < n; i++) {
		cin >> arr[i];
		sum[i] = sum[i - 1] + arr[i]; 
	}
	bt(0);
	cout << ans;
}
