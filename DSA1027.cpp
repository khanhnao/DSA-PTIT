#include<bits/stdc++.h>
using namespace std;

int n, a[10], ok;

int tich(int n) {
	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * tich(n - 1);
	}
}

void sinh() {
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1]) {
		i--;
	}
	if (i == 0) {
		ok = 0;
	} else {
		int j = n;
		while (a[i] > a[j]) j--;
		swap(a[i], a[j]);
		int l = i + 1, r = n;
		while (l < r) {
			swap(a[l],a[r]);
			l++;r--;
		}
	}
}

int main() {
	//int t; cin >> t;
	//while(t--) {
		cin >> n;
		ok = 1;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sort(a + 1, a+n+1);
		while (ok) {
			for (int i = 1; i <= n; i++) {
				cout << a[i] << " ";
			}
			sinh();
			cout << endl;
		}
		cout << endl;
	//}
}