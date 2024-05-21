#include <bits/stdc++.h>
using namespace std;

int f[101][25001];

int main() {
	int n, C;
	cin >> C >> n;
	int c[n + 1];
	for (int i = 1; i <= n; i++) cin >> c[i];
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= C; j++) {
			if(j >= c[i]) {
				f[i][j] = max(c[i] + f[i - 1][j - c[i]], f[i - 1][j]);
			} else {
				f[i][j] = f[i - 1][j];
			}
		}
	}
	cout << f[n][C] << endl;
}