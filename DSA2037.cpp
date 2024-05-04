#include<bits/stdc++.h>
using namespace std;

int n, s, a[101], x[101];
vector<vector<int>> v;

bool cmp(int a, int b) {
	return a > b;
}

bool nto(int n) {
	if (n < 2) return 0;
	if (n == 2) return 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void Try(int i, int bd, int sum) {
	for (int j = bd; j <= n; j++) {
		x[i] = a[j];
		if (nto(sum + a[j])) {
			vector<int> tmp(x + 1, x + i + 1);
			v.push_back(tmp);
		}
		Try(i + 1, j + 1, sum + a[j]);
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n; 
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sort(a + 1, a + n + 1, cmp);
		Try(1, 1, 0);
		sort(v.begin(), v.end());
		for (auto x : v) {
			for (int i = 0; i < x.size(); i++) {
				cout << x[i] << " ";
			}
			cout << endl;
		}
		v.clear();
	}
}