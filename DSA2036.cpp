#include<bits/stdc++.h>
using namespace std;

int n, a[101], x[101];
vector<vector<int>> v;

bool cmp(int a, int b) {
	return a > b;
}

void Try(int i,int bd, int sum) {
	for (int j = bd; j <= n; j++) {
		x[i] = a[j];
		if ((sum + a[j]) % 2 == 1) {
			vector<int> tmp(x + 1, x + i + 1);
			v.push_back(tmp);
		} 
		Try(i + 1, j + 1, sum + a[j]);
	}
} 

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n; 
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sort(a + 1, a + n + 1, cmp);
		Try(1, 1, 0);
		sort(v.begin(), v.end());
		for (vector<int> tmp : v) {
			for (int x : tmp) {
				cout << x << " ";
			}
			cout << endl;
		}
		v.clear();
	}
}