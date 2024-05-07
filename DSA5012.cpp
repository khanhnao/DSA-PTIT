#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
long long c[1001][1001];
int main() {
	int t; cin >> t;
	c[0][0] = 1;
	for (int i = 1; i < 1001; i++) {
		c[i][0] = 1;
		for (int j = 1; j < 1001; j++) {
			c[i][j] = (c[i - 1][j - 1] % mod + c[i - 1][j] % mod) % mod;
		}
	}
	while(t--) {
		int n, k;
		cin >> n >> k;
		cout << c[n][k] << endl;
	} 
}