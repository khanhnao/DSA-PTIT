#include<bits/stdc++.h>
using namespace std;

int k;
string a, b;

int xuly(string s, int k) {
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum = sum * k + s[i] - '0';
	}
	return sum;
}

void xuly2() {
	long long s = xuly(a, k) + xuly(b, k);
	string ans = "";
	while(s) {
		ans += to_string(s % k);
		s /= k;
	}
	for (int i = ans.size() - 1; i >= 0; i--) {
		cout << ans[i];
	}
	cout << endl;
}

main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> k >> a >> b;
		xuly2();
	}
}