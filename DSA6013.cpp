#include <bits/stdc++.h>
using namespace std;

int cnt[1000001];

int main() {
	int t;
    cin >> t;
    while (t--){
    	int n,x; cin >> n >> x;
    	int a[n];
    	for (int i = 0; i < n; i++) {
    		cin >> a[i];
    		cnt[a[i]]++;
		}
			if (cnt[x] > 0) {
				cout << cnt[x];
			} else {
				cout << "-1";
			}
		cout << endl;
		memset(cnt, 0, sizeof(cnt));
	}
}