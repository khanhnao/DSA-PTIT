#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], x[100];

void Try(int i) {
	for (int j = x[i - 1] + 1; j <= n - k + i; j++) {
		x[i] = j;
		if(i == k) {
			for (int u = 1; u <= k; u++) {
				cout << a[x[u]] << " ";
			}
			cout << endl;
		} else {
			Try(i + 1);
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n >> k;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		x[0] = 0;
		sort(a + 1, a + n + 1);
		Try(1);
	}
}