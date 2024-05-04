#include <bits/stdc++.h>
using namespace std;

int n, k, s;
vector <int> a,b;
vector <vector <int>> res;


void pb() {
	int sum = 0;
	for (int i = 0; i < n; i++)
        if (a[i] == 1)
            sum += b[i];
    if (sum == s)
        res.push_back(a);
}

bool check() {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 1) {
			cnt++;
		}
	}
	return (cnt == k);
}

void Try(int i) {
	for (int j = 0; j <= 1; j++) {
		a[i] = j;
		if (i == n - 1) {
			if (check()) {
				pb();
			} 
		} else {
			Try(i + 1);
		}
	}
}

int main() {
	while(true) {
		cin >> n >> k >> s;
		if (n == 0 && k == 0 && s == 0) {
			break;
		}
		a.resize(n, 0);
		b.resize(n, 0);
		for (int i = 0; i < n; i++) {
			b[i] = i + 1;
		}
		Try(0);
		cout << res.size() << endl;
		res.clear();
	}
}