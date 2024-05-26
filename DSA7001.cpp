#include <bits/stdc++.h>
using namespace std;


int main() {
	vector<string> v;
	string s;
	while(getline(cin, s)) {
		if(s[0] == 's') {
			if(v.size() == 0) cout << "empty\n";
			else {
				for (auto x : v) cout << x << " ";
				cout << endl;
			}
		} else if (s[1] == 'u') {
			string tmp = "";
			for (int i = 5; i < s.size(); i++) {
				tmp += s[i];
			}
			v.push_back(tmp);
		} else {
			v.pop_back();
		}
	}
}