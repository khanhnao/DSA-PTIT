#include<bits/stdc++.h>
using namespace std;

int n, s, a[101], x[101], ok = 0;

void Try(int i, int pos, int sum) {
	if (ok) return;
	for (int j = pos; j <= n; j++) {
		if (sum + a[j] <= s) {
			x[i] = a[j];
			if (sum + a[j] == s) {
				ok = 1;
			} else {
				Try(i + 1, j + 1, sum + a[j]);
			}
		} 
	}
} 

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n; 
		s = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			s += a[i];
		}
		if (s % 2 == 1) {
			ok = 0;
		} else {
			sort(a + 1, a + n + 1);
			s /= 2;
			Try(1, 1, 0);
		}
		if (ok) cout << "YES\n";
		else cout << "NO\n";
		ok = 0;
	}
}