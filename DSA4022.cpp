#include<bits/stdc++.h>
using namespace std;

char xuly(int n, long long k) {
	long long x = pow(2, n - 1);
	if (k == x) return n + 'A' - 1;
	if (k > x) return xuly(n - 1, k - x);
	return xuly(n - 1, k);
}

int main() {
	int t; cin >> t;
	while(t--) {
		int n; long long k;
		cin >> n >> k;
		cout << xuly(n, k) << endl;
	}
}