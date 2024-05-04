#include <bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		int n, x; cin >> n >> x;
		int a[n];
		vector <pair<int, int>> v(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			v[i].first = abs(a[i] - x);
			v[i].second = i;
		}
		sort (v.begin(), v.end());
		for (int i = 0; i < n; i++) 
			cout << a[v[i].second] << " ";
		
		cout << endl;
	}
}