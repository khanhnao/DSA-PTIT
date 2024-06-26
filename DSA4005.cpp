#include<bits/stdc++.h>
using namespace std;

long long f[100];

void ktao() {
	f[1] = 1; f[2] = 1;
	for (int i = 3; i <= 92; i++) {
		f[i] = f[i - 2] + f[i - 1];
	}
}

char fibo(long long n, long long k) {
	if (n == 1) return 'A';
	if (n == 2) return 'B';
	if (k <= f[n - 2]) {
		return fibo(n - 2, k);
	} else {
		return fibo(n - 1, k - f[n - 2]);
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		long long n, k; cin >> n >> k;
		ktao();
		cout << fibo(n, k) << endl;
	}
}