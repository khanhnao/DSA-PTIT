#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.first == b.first)
	{
		return a.second > b.second;
	}
	return a.first < b.first;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		pair <int, int> a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i].first;
			a[i].second = i;
		}
		sort (a, a + n, cmp);
		int min = a[0].second, k = a[0].first, ans = -1;
		for (int i = 1; i < n; i++) {
			ans = max(ans, a[i].second - min);
			if (min > a[i].second) {
				min = a[i].second;
				k = a[i].first;
			}
		}
		cout << ans;
		cout << endl;
	}
}