#include<bits/stdc++.h>
using namespace std;

int n, s, a[100], x[100], res = 1e9;

void Try(int i, int pos, int sum) {
	for (int j = pos; j <= n; j++) {
		if (sum + a[j] <= s) {
			x[i] = a[j];
			if (sum + a[j] == s) {
				res = min(res, i);
			} else {
				Try(i + 1, j + 1, sum + a[j]);
			}
		} 
		else {
			return;
		}
	}
} 

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n >> s;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		Try(1,1,0);
		if (res == 1e9) {
			cout << -1;
		} else {
			cout << res;
		}
		cout << endl;
		//memset(x, 0, sizeof(x));
		res = 1e9;
	}
}