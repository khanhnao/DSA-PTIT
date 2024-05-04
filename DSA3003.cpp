#include <bits/stdc++.h>
using namespace std;

int to_five(string s) {
	int n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '6') {
			s[i] = '5';
		}
		n = n * 10 + s[i] - '0';
	}
	return n;
}

int to_six(string s) {
	int n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '5') {
			s[i] = '6';
		}
		n = n * 10 + s[i] - '0';
	}
	return n;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long a[n], mod = 1e9 + 7,s = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort (a, a + n);
		for (int i = 0; i < n; i++) {
			s = (s + a[i] * i) % mod;
		}
		cout << s << endl;
	}
}