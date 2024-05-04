#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int d; cin >> d;
		//cin.ignore();
		string s; cin >> s;
		int a[30] = {}, MAX = 0;
		for (int i = 0; i < s.size(); i++) {
			a[s[i] - 'A']++;
		}
		for (int i = 0; i < 30; i++) {
			MAX = max(MAX, a[i]);
		}
		if (MAX * d > s.size() + 1) {
			cout << "-1";
		} else {
			cout << "1";
		}
		cout << endl;
	}
}