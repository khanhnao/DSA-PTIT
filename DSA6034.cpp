#include <bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		int a[n];
		map<int,long long> mp;
		long long cnt = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		for (auto i : mp) {
			if(i.first * 2 == k) {
				cnt += i.second * (i.second - 1);
			} else {
				cnt += i.second * mp[k - i.first];
			}
		}
		cout << cnt / 2 << endl;
	}
}