#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
	if(a.size() == b.size()) {
		return a > b;
	} else {
		return a.size() > b.size();
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<string> v;
		queue<string> q;
		q.push("6");
		q.push("8");
		while(true) {
			string tmp = q.front();
			q.pop();
			if(tmp.size() == n + 1) break;
			v.push_back(tmp);
			q.push(tmp + "6");
			q.push(tmp + "8");
		}
		sort(v.begin(), v.end(), cmp);
		for (auto x : v) {
			cout << x << " ";
		}
		cout << endl;
	}
}