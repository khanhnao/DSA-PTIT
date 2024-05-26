#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
	stack<int> st;
	for (int i = 0; i < s.size(); i++) {
		if(s[i] == '(') {
			st.push(i);
		} else if(s[i] == ')') {
			if(i - st.top() == 2) return 1;
			else if(s[i - 1] == ')' && s[st.top() + 1] == '(') return 1;
			else st.pop();
		}
	}
	return 0;
}


int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		if (check(s)) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}