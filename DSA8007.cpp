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
		long long n; cin >> n;
		queue<long long> q;
		q.push(0);
		q.push(1);
		set<long long> v;
		while(q.front() <= n) {
			long long tmp = q.front();
			q.pop();
			v.insert(tmp);
			q.push(tmp * 10 + 0);
			q.push(tmp * 10 + 1);
		}

		cout << v.size() - 1;
		//for (auto x : v) cout << x << " ";
		cout << endl;
		v.clear();
	}
}