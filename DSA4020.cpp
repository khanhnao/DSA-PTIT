#include<bits/stdc++.h>
using namespace std;

int xuly(int a[], int n, int x) {
    int l = 0, r = n - 1, res = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] = x) {
        	res = mid;
        	return res;
    	} else {
    		if (a[mid] < x) {
    			l = mid + 1;
			} else {
				r = mid - 1;
			}
		} 
    }
    return res;
}

int bs (int a[], int l, int r, int x) {
	if(l > r) return -1;
	int m = (l + r) / 2;
	if (a[m] == x) return m;
	else if (a[m] < x) return bs(a, m + 1, r, x);
	else return bs(a, l, m - 1, x);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n]; 
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);  
        int ans = bs(a, 0, n - 1, x); 
        if (ans == -1) {
            cout << "NO\n";
        } else {
            cout << ans + 1 << endl;
        }
    }
}
