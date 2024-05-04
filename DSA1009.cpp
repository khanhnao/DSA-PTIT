#include <bits/stdc++.h>
using namespace std;

int n, ok, k;
char a[20];

void ktao() {
    for (int i = 1; i <= n; i++) {
        a[i] = 'A';
    }
}

void sinh() {
    int i = n;
    while (i >= 1 && a[i] == 'B') {
        a[i] = 'A';
        i--;
    }
    if (i == 0) {
        ok = 0;
    } else {
        a[i] = 'B';
    }
}

bool check() {
    int dem = 0, res = 0;
    for (int i = 1; i <= n; i++) {
    	if (a[i] == 'A') {
    		dem++;
		} else {
			dem = 0;
		}
		if (dem > k) return 0;
		if (dem == k) {
			res++;
		}
	}
	return (res == 1);
}

int main() {
	ok = 1;
	int cnt = 0;
    cin >> n >> k;
    ktao();
    while (ok) {
        if (check()) {
            cnt++;
        }
 	   sinh();
    }
    cout << cnt << endl;
    ok = 1;
    ktao();
    while (ok) {
        if (check()) {
            for (int i = 1; i <= n; i++) {
                cout << a[i];
            }
            cout << endl;
        }
 	   sinh();
    }
}
