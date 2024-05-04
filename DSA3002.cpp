#include <bits/stdc++.h>
using namespace std;

int to_five(string s) {
	int n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '6') {
			s[i] = '5';
		}
		n = n * 10 + s[i] - '0';
	}
	return n;
}

int to_six(string s) {
	int n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '5') {
			s[i] = '6';
		}
		n = n * 10 + s[i] - '0';
	}
	return n;
}

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	cout << to_five(s1) + to_five(s2) << " " << to_six(s1) + to_six(s2);
}