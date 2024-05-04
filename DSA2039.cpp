#include<bits/stdc++.h>
using namespace std;


int n, k, a[100], x[100];
vector <vector<int>> v;

bool cmp(int a, int b) {
	return a > b;
}

void Try(int i, int bd, int sum) {
	for (int j = bd; j <= n; j++) {
		if (sum + a[j] <= n) {
			x[i] = a[j];
			if (sum + a[j] == n) {
				vector <int> tmp(x + 1, x + i + 1);
				v.push_back(tmp);
			} else {
				Try(i + 1, j, sum + a[j]);
			}
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			a[i] = i;
		}
		sort(a + 1, a + n + 1, cmp);
		Try(1, 1, 0);
		cout << v.size() << endl;
        for (auto it : v) {
            cout << "(";
            for (int i = 0; i < it.size(); i++) {
                cout << it[i];
                if (i < it.size() - 1) {
                    cout << " ";
                }
            }
            cout << ") ";
        }
        cout << endl;
        v.clear();
	}
}