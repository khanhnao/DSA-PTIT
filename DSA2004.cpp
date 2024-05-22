#include<bits/stdc++.h>
using namespace std;

int n, a[10][10], check;
string s;

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};
string path = "DLRU";

void Try(int i, int j) {
	if(i == n && j == n) {
		check = 1;
		cout << s << " ";
	}
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]) {
			a[i1][j1] = 0;
			s += path[k];
			Try(i1, j1);
			a[i1][j1] = 1;
			s.pop_back();
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n;
		check = 0;
		s = "";
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		if(a[1][1]) {
			a[1][1] = 0;
			Try(1, 1);
			if (check == 0) cout << -1;
		} else {
			cout << -1;
		}
		cout << endl;
	}
}