#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
    cin >> t;
    while (t--){
    	int n, x; cin >> n;
    	int a[n];
    	int max = 1e7;
    	for (int i = 0; i < n; i++) {
    		cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (abs(a[i] + a[j]) < abs(max)) {
					max = a[i] + a[j];
				}
			}
		}
		cout << max;
		cout << endl;
	}
}