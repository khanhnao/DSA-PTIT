#include <bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		int n, ans = INT_MAX; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		for (int i = 1; i < n; i++) {
			ans = min(ans, a[i] - a[i - 1]);
		}
		cout << ans << endl;
	}
}