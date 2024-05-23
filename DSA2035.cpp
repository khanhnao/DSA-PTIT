#include<bits/stdc++.h>
using namespace std;

int n, k, res = INT_MAX, x[100];
bool visited[100];
vector<string> v;

void xuly() {
	int maxn = INT_MIN;
	int minn = INT_MAX;
	for (auto s : v) {
		string tmp = "";
		for (int i = 0; i < k; i++) tmp += s[x[i]];
		maxn = max(maxn, stoi(tmp));
		minn = min(minn, stoi(tmp));
	}
	res = min(res, maxn - minn);
}

void Try(int i) {
	for (int j = 0; j < k; j++) {
		if(!visited[j]) {
			visited[j] = 1;
			x[i] = j;
			if (i == k - 1) {
				xuly();
			} else {
				Try(i + 1);
			}
			visited[j] = 0;
		}
	}
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}
	Try(0);
	cout << res;
}