#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <int, int> a, pair <int, int> b) {
	if (a.second > b.second) return 1;
	if (a.second == b.second && a.first < b.first) return 1;
	return 0;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		vector <pair<int, int>> p;
		map <int, int> m;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			m[a[i]]++;
		}
		for(int i = 0; i < n; i++) {
			p.push_back(make_pair(a[i], m[a[i]]));
		}
		sort(p.begin(), p.end(), cmp);
		for (auto it : p) {
			cout << it.first << " ";
		}
		cout << endl;
	}
}