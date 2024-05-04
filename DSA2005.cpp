#include<bits/stdc++.h>
using namespace std;

string s;
int a[1000];
bool visited[1000];

void Try(int i) {
	for (int j = 0; j < s.size(); j++) {
		if (!visited[j]) {
			a[i] = j;
			visited[j] = 1;
			if (i == s.size() - 1) {
				for (int i = 0; i < s.size(); i++) {
					cout << s[a[i]];
				}
				cout << " ";
			} else {
				Try(i + 1);
			}
			visited[j] = 0;
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> s;
		Try(0);
		cout << endl;
	}
}