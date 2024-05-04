#include<bits/stdc++.h>
using namespace std;

int n, s, a[101], x[101];
vector<vector<int>> v;


void Try(int i, int bd, int sum) {
	for (int j = bd; j <= n; j++) {
		if (sum + a[j] <= s) {
			x[i] = a[j];
			if(sum + a[j] == s) {
				vector <int> tmp(x + 1, x + i + 1);
				v.push_back(tmp);
			} else {
				Try(i + 1, j, sum + a[j]);
			}
		} 
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n >> s; 
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		Try(1, 1, 0);
		if (v.size() == 0) {
			cout << -1;
		} else {
			for (auto it : v) {
				int isFinal = true;
				cout << "[";
				for (int u = 0; u < it.size(); u++) {
					if(!isFinal) {
						cout << " ";
					}
					cout << it[u];
					isFinal = false;
				}
				cout << "]";
			}
		}
		cout << endl;
		v.clear();
	}
}