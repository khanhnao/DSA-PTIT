#include <bits/stdc++.h>
using namespace std;

int f[1001][1001];

int main() {
	int t; cin >> t;
	while(t--) {
		int n, V;
		cin >> n >> V;
		int v[n + 1], w[n + 1];
		for (int i = 1; i <= n; i++) cin >> w[i];
		for (int i = 1; i <= n; i++) cin >> v[i];
		
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= V; j++) {
				if (j >= w[i]) {
					f[i][j] = max(v[i] + f[i - 1][j - w[i]], f[i - 1][j]);
				} else {
					f[i][j] = f[i - 1][j];
				}
			}
		}
		cout << f[n][V] << endl;
	}
}