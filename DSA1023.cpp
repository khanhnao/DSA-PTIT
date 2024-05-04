#include<iostream>
#include<set>
#include<cmath>
using namespace std;

int n, k, a[100], ok;
set <int> se;

int tong(int n, int k) {
	if (n == k || k == 0) {
		return 1;
	} else {
		return tong(n - 1, k - 1) + tong(n - 1, k);
	}
}

void sinh() {
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) {
		ok = 0;
	} else {
		a[i]++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n >> k;
		ok = 1;
		for (int i = 1; i <= k; i++) {
			cin >> a[i];
		}
		int cnt = 0;
		while(ok) {
			cnt++;
			sinh();
		}
		cout << tong(n, k) - cnt + 1;
		cout << endl;
	}
}
