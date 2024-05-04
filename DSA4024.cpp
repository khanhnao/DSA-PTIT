#include<bits/stdc++.h>
using namespace std;

int n, k; 
int mod = 1e9 + 7;

struct Matrix {
	long long f[15][15];
};

Matrix operator * (Matrix a, Matrix b) {
	Matrix c;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c.f[i][j] = 0;
			for (int k = 0; k < n; k++) {
				c.f[i][j] += (a.f[i][k] * b.f[k][j]) % mod;
				c.f[i][j] %= mod;
			}
		}
	}
	return c;
}

Matrix binpow(Matrix a, int k) {
	if (k == 1) return a;
	Matrix tmp = binpow(a, k / 2);
	if (k % 2 == 0) {
		return tmp * tmp;
	} else {
		return a * tmp * tmp;
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n >> k;
		Matrix a;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a.f[i][j];
			}
		}
		Matrix res = binpow(a, k);
		long long ans = 0;
		for (int i = 0; i < n; i++) {
			ans += (res.f[i][n - 1] % mod);
			ans %= mod;
		}
		cout << ans << endl;
	}
}