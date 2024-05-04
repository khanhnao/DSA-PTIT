#include<bits/stdc++.h>
using namespace std;

int n = 8, a[100][100], x[100], cnt = 0;
bool cot[100], cheo1[100], cheo2[100];


void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (cot[j] == 0 && cheo1[i - j + n] == 0 && cheo2[j + i - 1] == 0) {
			x[i] = j;
			cot[j] = 1; cheo1[i - j + n] = 1; cheo2[i + j - 1] = 1;
			if (i == n) {
				int tong = 0;
				for (int hang = 1; hang <= n; hang++) {
					tong += a[hang][x[hang]];
				}
				cnt = max(cnt, tong);
			} else {
				Try(i + 1);
			}
			cot[j] = 0; cheo1[i - j + n] = 0; cheo2[i + j - 1] = 0;
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		//cin >> n;
		cnt = 0;
		for (int i = 1; i <= 8; i++) {
			for (int j = 1; j <= 8; j++) {
				cin >> a[i][j];
			}
		}
		Try(1);
		cout << cnt << endl;
		memset(x, 0, sizeof(x));
		memset(cot, 0, sizeof(cot));
		memset(cheo1, 0, sizeof(cheo1));
		memset(cheo2, 0, sizeof(cheo2));
	}
}