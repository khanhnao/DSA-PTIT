#include <bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		int a[n];
		long long ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		for (int i = 0; i < n; i++) {
			auto it = lower_bound(a + i + 1,a + n, a[i] + k);
			ans += it -(a + i + 1);
		}
		cout << ans << endl;
	}
}