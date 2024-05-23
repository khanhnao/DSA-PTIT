#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[100005], f[100005];
	int res = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		f[a[i]] = f[a[i] - 1] + 1;
		res = max(res, f[a[i]]);
	}
		
	cout << n - res;
}