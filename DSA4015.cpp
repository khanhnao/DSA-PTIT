#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t; cin >> t;
	while(t--) {
		ll n, x;
		cin >> n >> x;

		vector<ll> v(n);

		ll res = 0;
		int pos = 0;

		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (v[i] <= x) {
				res = max(res, v[i]);
				pos = i + 1;
			}
		}

		if (!pos) cout << -1 << endl;
		else cout << pos << endl;
	}
}