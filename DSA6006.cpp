#include <bits/stdc++.h>

using namespace std;
//int MAX = 1000001;
int cnt[3] = {0};

int main() {
	int t; cin >> t;
	while (t--) {
		int n; int x; cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> x;
			cnt[x]++;
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < cnt[i]; j++) {
				cout << i << " ";
			}
		}
		cout << endl;
		memset(cnt,0, sizeof(cnt));
	}
}