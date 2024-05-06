#include <bits/stdc++.h>
using namespace std;

bool cmp(long long a, long long b) {
	return a > b;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n; cin >> n;
		vector <long long> a(n), b(n);
		long long s = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), cmp);
		for (int i = 0; i < n; i++) {
			s += a[i] * b[i];
		}
		cout << s << endl;
	}
}