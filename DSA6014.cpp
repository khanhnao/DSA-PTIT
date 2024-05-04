#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
	if (n < 2) return false;
	if (n == 2) return true;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int t;
    cin >> t;
    while (t--){
    	int n, x = 0; cin >> n;
    	for (int i = 2; i <= n / 2; i++) {
    		if (snt(i) && snt(n - i)) {
    			x = i;
    			break;
			}
		}
		if (x == 0) cout << "-1";
		else cout << x << " " << n - x;
		cout << endl;
	}
}