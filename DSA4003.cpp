#include<bits/stdc++.h>
using namespace std;

long long mod = 123456789;

long long binpow(long long n, long long k) {
	if (k == 0) return 1;
	long long tmp = binpow(n, k / 2);
	if (k % 2 == 0) {
		return (tmp * tmp) % mod;
	} else {
		return (((tmp * tmp) % mod) * (n)) % mod;
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		cout << binpow(2, n - 1) << endl;
	}
}