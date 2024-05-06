#include <bits/stdc++.h>
using namespace std;

int xuly(string s) {
	stack <char> st;
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if(!st.empty() && st.top() == '[' && s[i] == ']') {
			st.pop();
		} else if (!st.empty() && st.top() == ']' && s[i] == '[') {
			cnt += st.size();
			st.pop();
		} else {
			st.push(s[i]);
		}
	}
	return cnt;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		string s; cin >> s;
		cout << xuly(s) << endl;
	}
}