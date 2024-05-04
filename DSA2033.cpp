#include<bits/stdc++.h>
using namespace std;

int n;
int a[100], visited[100];

void in() {
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

bool check(int i) {
    if (i == 1) return true;
    return abs(a[i] - a[i - 1]) != 1;
}

void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if(visited[j] == 0) {
			a[i] = j;
			visited[j] = 1;
			if (check(i)) {
				if (i == n) {
					in();
				} else {
					Try(i + 1);
				}
			}
			visited[j] = 0;
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n;
		Try(1);
	}
}