#include<bits/stdc++.h>
using namespace std;

string benhat(int n, int s) {
	string res = string(n, '0');
	for (int i = n - 1; i >= 0; i--) {
		if (s > 9) {
			res[i] = '9';
			s -= 9;
		} else {
			if(i != 0) {
				res[0] = '1';
				res[i] += (s - 1);
				return res;
			} else {
				res[i] += s;
				return res;
			}
		}
	}
	return res;
}

string lonnhat(int n, int s) {
	string res = string(n, '0');
	for (int i = 0; i < n; i++) {
		if (s > 9) {
			res[i] = '9';
			s -= 9;
		} else {
			res[i] = '0' + s;
			return res;
		}
	}
	return res;
}


int main() {
	int n, s;
	cin >> n >> s;
	if(n * 9 < s || s == 0 && n > 1) {
		cout << "-1 -1";
	} else {
		cout << benhat(n, s) << " " << lonnhat(n, s);
	}
}