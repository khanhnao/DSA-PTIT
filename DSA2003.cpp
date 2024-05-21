#include <bits/stdc++.h>
using namespace std;

int n, check;
string s;
int a[15][15];

void nhap() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j) {
	if(i == n && j == n) {
		check = 1;
		cout << s << " ";
	}
	
	if(i + 1 <= n && a[i + 1][j]) {
		s += "D";
		a[i + 1][j] = 0;
		Try(i + 1, j);
		a[i + 1][j] = 1;
		s.pop_back();
	}

	if(j + 1 <= n && a[i][j + 1]) {
		s += "R";
		a[i][j + 1] = 0;
		Try(i, j + 1);
		a[i][j + 1] = 1;
		s.pop_back();
	}
	
}

int main() {
	int t; cin >> t;
	while(t--) {
		nhap();
		check = 0;
        s = "";
		if(a[1][1] == 1) Try(1,1);
		if(check == 0) cout << -1;
		cout << endl;
	}
}