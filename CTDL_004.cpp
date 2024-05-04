#include<bits/stdc++.h>
using namespace std;

int n, k, cnt = 0;
int a[100], x[100];

void Try(int i, int pos) {
	for(int j = pos; j <= n; j++) {
		if (a[j] > x[i - 1]) {
			x[i] = a[j];
			if(i == k) {
				cnt++;
			} else {
				Try(i + 1, j + 1);
			}
		}
	}
}

int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	a[0] = 0;
	Try(1, 1);
	cout << cnt;
}