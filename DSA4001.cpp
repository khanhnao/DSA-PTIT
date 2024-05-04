#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

long long binpow(long long a, long long b) {
	if(b == 0) {
		return 1;
	}
	long long tmp = binpow(a, b / 2);
	if(b % 2 == 0) {
		return (tmp % mod) * (tmp % mod) % mod;
	} else {
		return ((tmp % mod) * (tmp % mod) % mod) * (a % mod) % mod ;
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		int a, b; cin >> a >> b;
		cout << binpow(a, b);
		cout << endl;
	}
}