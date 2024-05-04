#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, cnt = 1; cin >> n;
		int a[n][2];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 2; j++) {
				cin >> a[i][j];
			}
		}
		pair <int, int> p[n];
		for (int i = 0; i < n; i++) {
			p[i].first = a[i][1];
		}
		for (int i = 0; i < n; i++) {
			p[i].second = a[i][0];
		}
		sort(p, p + n);
		int k = p[0].first;
		for (int i = 1; i < n; i++) {
			if (p[i].second >= k) {
				cnt++;
				k = p[i].first;
			}
		}
		cout << cnt;
		cout << endl;
	}
}