#include<bits/stdc++.h>
using namespace std;

int n, a[100], cnt = 0;
bool cot[100], cheo1[100], cheo2[100];


void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (cot[j] == 0 && cheo1[i - j + n] == 0 && cheo2[j + i - 1] == 0) {
			a[i] = j;
			cot[j] = 1; cheo1[i - j + n] = 1; cheo2[i + j - 1] = 1;
			if (i == n) {
				cnt++;
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
		cin >> n;
		cnt = 0;
		Try(1);
		cout << cnt << endl;
		memset(a, 0, sizeof(a));
		memset(cot, 0, sizeof(cot));
		memset(cheo1, 0, sizeof(cheo1));
		memset(cheo2, 0, sizeof(cheo2));
	}
}