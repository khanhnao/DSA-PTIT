#include <bits/stdc++.h>
using namespace std;

int find_max(int a[], int s, int e) {
	int max = -1;
	for (int i = s; i < e; i++) {
		if (a[i] > max) max = a[i];
	}
	return max;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n - k + 1; i++) {
			cout << find_max(a, i, k + i) << " ";
		}
		cout << endl;
	}
}