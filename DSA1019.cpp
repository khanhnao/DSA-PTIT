#include<bits/stdc++.h>
using namespace std;

int n, ok;
char a[20];

void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 'A';
	}
}

void sinh() {
	int i = n;
	while (i >= 1 && a[i] == 'H') {
		a[i] = 'A';
		i--;
	}
	if (i == 0) {
		ok = 0;
	} else {
		a[i] = 'H';
	}
}

bool check() {
	if(a[1] != 'H' || a[n] != 'A') {
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == 'H' && a[i + 1] == 'H')
			return 0;
	}
	return 1;
}

int main() {
	int t; cin >> t;
	while(t--) {
		ok = 1;
		cin >> n;
		ktao();
		while(ok) {
			if(check()) {
				for (int i = 1; i <= n; i++) {
					cout << a[i];
				}
				cout << endl;
			}
			sinh();
		}
	}
}