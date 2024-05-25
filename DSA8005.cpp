#include <bits/stdc++.h>
using namespace std;

void binary(int n) {
	string ans = "";
	while(n) {
		ans = to_string(n % 2) + ans;
		n /= 2;
	}
	cout << ans << " ";
}

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		for (int i = 1; i <= n; i++) {
			binary(i);
		}
		cout << endl;
	}
}