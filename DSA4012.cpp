#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;

		vector<int> a(n);
		vector<int> b(m);

		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < m; i++) cin >> b[i];

		vector<int> res(n + m - 1, 0);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				res[i + j] += a[i] * b[j];
			}
		}

		for (auto x : res) cout << x << " ";
		cout << endl;
	} 
}