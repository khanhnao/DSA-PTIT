#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n], f[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		f[i] = 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j]) {
				f[i] = max(f[i], f[j] + 1);
			}
		}
	}
	cout << *max_element(f, f + n);
}