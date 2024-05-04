#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        pair <int, int> p[n];
        for (int i = 0; i < n; i++) {
        	cin >> p[i].second;
		}
		for (int i = 0; i < n; i++) {
        	cin >> p[i].first;
		}
		sort(p, p + n);
		int k = p[0].first, ans = 1;
		for (int i = 1; i < n; i++) {
			if (p[i].second >= k) {
				ans++;
				k = p[i].first;
			}
		}
		cout << ans << endl;
    }
}