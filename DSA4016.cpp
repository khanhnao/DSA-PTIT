#include<bits/stdc++.h>
using namespace std;

int a[1000001], b[1000001];

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}
		vector<int> v;
		int i = 0, j = 0;
		while(i < n && j < m) {
			if (a[i] <=  b[j]) {
				v.push_back(a[i++]);
			} else {
				v.push_back(b[j++]);
			}
		}
		while(i < n) v.push_back(a[i++]);
		while (j < m) v.push_back(b[j++]);
		cout << v[k - 1] << endl;
		v.clear();
	}
}
