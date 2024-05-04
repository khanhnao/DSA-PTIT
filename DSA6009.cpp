#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
    cin >> t;
    while (t--){
    	int n, x; cin >> n >> x;
    	int a[n];
    	int ans = 0;
    	for (int i = 0; i < n; i++) {
    		cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] == x - a[i]) {
					ans++;
				}
			}
		}
		cout << ans;
		cout << endl;
	}
}