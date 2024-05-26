#include <bits/stdc++.h>
using namespace std;

int xuly(string s) {
	int ans = 0;
	stack<int> st;
	for (int i = 0; i < s.size(); i++) {
		if(s[i] == '(') st.push(i);
		else {
			if(st.empty()) {
				ans++;
				st.push(i);
			} else {
				st.pop();
			}
		}
	}
	ans += st.size()/2;
	return ans;
}


int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		cout << xuly(s);
		cout << endl;
	}
}