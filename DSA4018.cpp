#include<bits/stdc++.h>
using namespace std;

int xuly(int a[], int n) {
	int l = 0, r = n - 1, res = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] == 1) {
			res = mid;
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return res;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << xuly(a, n) << endl;
	}
}