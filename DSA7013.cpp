#include <bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		int res = 0;
		stack<int> st;
		for (int i = 0; i < s.size(); i++) {
			if(s[i] >= '0' && s[i] <= '9') {
				st.push(stoi(string(1, s[i])));
			} else {
				int fi = st.top(); st.pop();
				int se = st.top(); st.pop();
				int tmp = 0;
				if(s[i] == '+') tmp = se + fi;
				else if(s[i] == '-') tmp = se - fi;
				else if(s[i] == '*') tmp = se * fi;
				else if(s[i] == '/') tmp = se / fi;
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}