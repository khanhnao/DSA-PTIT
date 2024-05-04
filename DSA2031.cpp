#include<bits/stdc++.h>
using namespace std;


char c, a[100];
int n, used[256];

bool nguyen_am(char c) {
	return c == 'A' || c == 'E';
}

void check() {
	for (int i = 2; i <= n - 1 ;i++) {
		if (nguyen_am(a[i]) && !nguyen_am(a[i+1]) && !nguyen_am(a[i-1])) {
			return;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void Try(int i) {
	for (int j = 'A'; j <= c; j++) {
		if(!used[j]) {
			a[i] = j;
			used[j] = true;
			if (i == n) {
				check();
			} else {
				Try(i + 1);
			}
			used[j] = false;
		}
	}
}

int main() {
	cin >> c;
	n = c - 'A' + 1;
	Try(1);
}