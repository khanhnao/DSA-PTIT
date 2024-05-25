#include <bits/stdc++.h>
using namespace std;

int n, k, s = 0, check;
bool visited[105];
int a[50], x[50];

void Try(int i, int pos, int sum, int cnt) {
	if (cnt == k + 1) {
		check = 1;
		return;
	}
	for (int j = pos; j <= n; j++) {
		if(!visited[j] && sum + a[j] <= s) {
			x[i] = a[j];
			visited[j] = true;
			if(sum + a[j] == s) {
				Try(i + 1, 1, 0, cnt + 1);
			} else {
				Try(i + 1, j + 1, sum + a[j], cnt);
			}
			if (check) return;
			visited[j] = false;
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n >> k;
		s = 0;
		memset(visited, false, sizeof(visited));
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			s += a[i];
		}
		if (s % k == 0) {
			s /= k;
			Try(1, 1, 0, 1);
			cout << check;
		} else {
			cout << 0;
		}
		cout << endl;
	}
}