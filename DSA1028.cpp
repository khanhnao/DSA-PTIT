#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100];
vector <int> v;
set <int> s;

void Try(int i) {
	for (int j = a[i - 1] + 1; j <= s.size() - k + i; j++) {
		a[i] = j;
		if (i == k) {
			for (int l = 1; l <= k; l++) {
				cout << v[a[l] - 1] << " ";
			}
			cout << endl;
		} else {
			Try(i + 1);
		}
	}
}

int main() {
	cin >> n >> k;
	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
		s.insert(b[i]);
	}
	for (auto it : s) {
		v.push_back(it);
	}
	Try(1);
}