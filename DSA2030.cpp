#include<bits/stdc++.h>
using namespace std;

char c;
int k, a[100];

void in() {
	for (int i = 1; i <= k; i++) {
		cout << (char)(a[i] + 64);
	}
	cout << endl;
}

void Try(int i) {
	int n = c - 'A' + 1;
	for (int j = a[i - 1]; j <= n; j++) {
		a[i] = j;
		if (i == k) {
			in();
		} else {
			Try(i + 1);
		}
	}
}

int main() {
	cin >> c;
	cin >> k;
	a[0] = 1;
	Try(1);
}