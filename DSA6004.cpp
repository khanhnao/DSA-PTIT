#include <bits/stdc++.h>
using namespace std;

void inp(int a[], int length) {
	for(int i = 0; i < length; i++) {
		cin >> a[i];
	}
}

int main() {
	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        inp(a, n); inp(b, m);
        set <int> se;
        for (int i = 0; i <  n; i++) se.insert(a[i]);
        for (int i = 0; i <  m; i++) se.insert(b[i]);
        vector <int> v;
        for(int i = 0; i < n; i++) {
        	for(int j = 0; j < m; j++) {
        		if(a[i] == b[j]) v.push_back(a[i]);
			}
		}
        for(auto it:se) cout << it << " ";
        cout << endl;
        for(auto x : v) cout << x << " ";
        cout << endl;
    }
}