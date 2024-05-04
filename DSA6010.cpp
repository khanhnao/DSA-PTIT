#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
    cin >> t;
    while (t--){
    	int n, x; cin >> n;
    	int a[10] = {};
    	for (int i = 0; i < n; i++) {
    		cin >> x;
    		while(x != 0) {
    			int y = x % 10;
    			x /= 10;
    			a[y]++;
			}
		}
		for (int i = 0; i < 10; i++) {
			if (a[i] > 0) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
}