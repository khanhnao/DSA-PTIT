#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100];
vector <string> v;
set <string> se;

void Try(int i) {
	for (int j = a[i - 1] + 1; j <= se.size() - k + i; j++) {
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
	cin.ignore();
	string s, str;
	getline(cin, s);
	stringstream ss(s);
	while (ss >> str) {
		se.insert(str);
	}
	for (auto it : se) {
		v.push_back(it);
	}
	Try(1);
}