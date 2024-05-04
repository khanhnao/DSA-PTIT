#include<bits/stdc++.h>
using namespace std;

void binTogray(string s) {
	string ans = "";
	ans += s[0];
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == '1') {
			if (ans[i - 1] == '0') {
				ans += '1';
			} else {
				ans += '0';
			}
		} else {
			ans += ans[i - 1];
		}
	}
	cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		binTogray(s);
	}
}