#include<bits/stdc++.h>
using namespace std;

int n, res = 100, x[100];
bool visited[100];
string s[100];
int f[50][50];

void xuly() {
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		cnt += f[x[i - 1]][x[i]];
	}
	res = min(res, cnt);
}

void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if(!visited[j]) {
			visited[j] = 1;
			x[i] = j;
			if (i == n) {
				xuly();
			} else {
				Try(i + 1);
			}
			visited[j] = 0;
		}
	}
}

int dem(string a, string b) {
	map<char, int> mp;
	for (auto x : a) mp[x]++;
	for (auto x : b) mp[x]++;
	int cnt = 0;
	for (auto it : mp) {
		if(it.second > 1) {
			cnt++;
		}
	}
	return cnt;
}

int main() {
	cin >> n;
	memset(f, 0, sizeof f);
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			f[i][j] = dem(s[i], s[j]);
			f[j][i] = f[i][j];
		}
	}
	Try(1);
	cout << res;
}