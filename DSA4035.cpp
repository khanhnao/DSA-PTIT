#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

long long binpow(long long n, long long k) {
	if (k == 0) return 1;
	long long tmp = binpow(n, k / 2);
	if (k % 2 == 0) {
		return (tmp % mod) * (tmp % mod) % mod;
	} else {
		return ((tmp % mod) * (tmp % mod) % mod) * (n % mod) % mod;
	}
}

int main() {
	while(1) {
		long long n, k; cin >> n >> k;
		if (n == 0 && k == 0) {
			break;
		}
		cout << binpow(n, k) << endl;
	}
}