#include<bits/stdc++.h> 
using namespace std;

int n, a[100], ok, k;

void ktao() {
	for(int i = 1; i <= n; i++) {
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

bool check() {
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1) {
			cnt++;
		}
	}
	return cnt == k;
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n >> k;
		ok = 1;
		ktao();
		while(ok) {
			if (check()) {
				for (int i = 1; i <= n; i++) {
					cout << a[i];
				}
				cout << endl;
			}
			sinh();
		}
		//cout << endl;
	}
}