#include<bits/stdc++.h>
using namespace std;

void sinh(string s) {
	int n = s.size() - 1;
	int i = n - 1;
	while(i >= 0 && s[i] >= s[i + 1]) {
		i--;
	}
	if (i == -1) {
		cout << "BIGGEST";
	} else {
		int j = n;
		while (s[i] >= s[j]) j--;
		swap(s[i], s[j]);
		int l = i + 1, r = n;
		while (l < r) {
			swap(s[l], s[r]);
			l++;r--;
		}
		cout << s;
	}
}

int main() {
	int t; cin >> t;
	cin.ignore();
	for (int i = 1; i <= t; i++) {
		string s, num, x;
		getline(cin, s);
		stringstream ss(s);
		while (ss >> num) {
			x = num;
		}
		cout << i << " ";
		sinh(x);
		cout << endl;
	}
}