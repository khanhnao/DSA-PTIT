#include<bits/stdc++.h>
using namespace std;

int n;
char x[20];
string s;
vector<string> v;

void Try(int i, int pos) {
	for (int j = pos; j <= n; j++) {
		x[i] = s[j];
		if (i >= 1) {
			string s1 = "";
			for (int u = 1; u <= i; u++) {
				s1 += x[u];
			}
			v.push_back(s1);
		}
		Try(i + 1, j + 1);
	}
} 

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n;
		cin >> s;
		s = "0" + s;
		Try(1, 1);
		sort(v.begin(), v.end());
		for (auto x : v) {
			cout << x << " ";
		}
		cout << endl;
		v.clear();
	}
}