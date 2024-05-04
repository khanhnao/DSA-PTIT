#include <bits/stdc++.h>
using namespace std;

int xuly(string s) {
	stack <char> st = stack <char>();
	for (int i = 0; i < s.size(); i++) {
		if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
			st.push(s[i]);
		} else {
			if(st.empty()) return 0;
			else if (s[i] == ')' && st.top() == '(') st.pop();
			else if (s[i] == ']' && st.top() == '[') st.pop();
			else if (s[i] == '}' && st.top() == '{') st.pop();
			else return 0;
		}
	}
	return 1;
}

int main() {
	int t; cin >> t;
	while(t--) {
		string s;
		cin >> s;
		if(xuly(s)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}