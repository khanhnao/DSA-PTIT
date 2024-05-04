#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok, b[100];

void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}

void sinh() {
	int i = n;
	while(i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == 0) {
		ok = 0;
	} else {
		a[i] = 1;
	}
}

void binTogray() {
	b[0] = a[0];
	b[1] = a[1];
	for (int i = 2; i <= n; i++) {
		if (a[i] != a[i - 1]) {
			b[i] = 1;
		} else {
			b[i] = 0;
		}
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		ok = 1;
		ktao();
		binTogray();
		while (ok) {
			for(int i = 1; i <= n; i++) {
				cout << b[i];
			}
			sinh();
			binTogray();
			cout << " ";
		}
		cout << endl;
	}
}