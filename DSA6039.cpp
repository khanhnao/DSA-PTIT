#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k;
		cin >> n;
		vector <int> a(n);
		unordered_map <int,int> m;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			m[a[i]]++;
		}
		int ok = 0, x = -1;
		for (int i = 0; i < n; i++) {
			if (m[a[i]] > 1) {
				x = a[i];
				break;
			}
		}
		if (x != -1) {
			cout << x;
		} else {
			cout << "NO";
		}
		cout << endl;
	}
}