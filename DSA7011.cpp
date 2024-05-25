#include <bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		string res = "";
		stack<string> st;
		for (int i = 0; i < s.size(); i++) {
			if(isalpha(s[i])) {
				st.push(string(1, s[i]));
			} else {
				string fi = st.top(); st.pop();
				string se = st.top(); st.pop();
				string tmp = s[i] + se + fi;
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}