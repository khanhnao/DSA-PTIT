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
	long long s = xuly(a, 2) * xuly(b, 2);
	cout << s;
	cout << endl;
}

main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		xuly2();
	}
}