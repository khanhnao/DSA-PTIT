#include <bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		int n, ans; cin >> n;
		int a[n];
		int ok = 0;
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		for (auto it : mp) {
			int max_fre = max(max_fre, it.second);
			if (it.second == max_fre && it.second * 2 > n) {
				ok = 1;
				ans = it.first;
			}
		}
		if (ok) cout << ans << endl;
		else cout << "NO\n";
	}
}