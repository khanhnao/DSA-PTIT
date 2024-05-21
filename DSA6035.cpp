#include <bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n], inc[n], dec[n];
		inc[0] = 1; dec[n - 1] = 1;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i < n; i++) {
			if(a[i] > a[i - 1]) {
				inc[i] = inc[i - 1] + 1;
			} else {
				inc[i] = 1;
			}
		}
		for (int i = n - 2; i >= 0; i--) {
			if(a[i] > a[i + 1]) {
				dec[i] = dec[i + 1] + 1;
			} else {
				dec[i] = 1;
			}
		}
		for (int i = 0; i < n; i++) {
			ans = max(ans, dec[i] + inc[i] - 1);
		}
		cout << ans << endl;
	}
}