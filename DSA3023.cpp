#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x = 0, t = 0, d = 0, ans = 0; cin >> n;
	string s; cin >> s;
	for (int i = 0; i < n; i++) {
		if(s[i] == 'X') x++;
		else if (s[i] == 'T') t++;
		else if (s[i] == 'D') d++;
	}
	for (int i = 0; i < x; i++) {
		if(s[i] == 'T') {
			for (int j = x; j < n; j++) {
				if(s[j] == 'X') {
					swap(s[i], s[j]);
					ans++;
					break;
				}
			}
		} else if (s[i] == 'D') {
			for (int j = n - 1; j >= x; j--) {
				if(s[j] == 'X') {
					swap(s[i], s[j]);
					ans++;
					break;
				}
			}
		}
	}
	for (int i = x; i < x + t; i++) {
		if(s[i] == 'D') {
			for (int j = x + t; j < n; j++) {
				if(s[j] == 'T') {
					swap(s[i], s[j]);
					ans++;
					break;
				}
			}
		}
	}
	cout << ans;
}