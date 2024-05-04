#include<bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		int k; cin >> k;
		string s; cin >> s;
		int cnt[256] = {0};
		for (int i = 0; i < s.size(); i++) {
			cnt[s[i]]++;
		}
		priority_queue <int> q;
		for (int i = 0; i < 256; i++) {
			if(cnt[i]) q.push(cnt[i]);
		}
		while(k-- && !q.empty()) {
			int u = q.top(); q.pop();
			if(u - 1 > 0) q.push(u - 1);
		}
		long long res = 0;
		while(!q.empty()) {
			int u = q.top();
			res +=  1ll * u * u;
			q.pop();
		}
		cout << res << endl;
	}
}