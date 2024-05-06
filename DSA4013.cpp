#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end());
		int i = 0, j = n / 2, ans = n;
		while(i < n && j < n) {
			if (a[i] * 2 <= a[j]) {
				ans--;
				i++;
				j++;
			} else {
				j++;
			}
		}
		cout << ans << endl;
	} 
}