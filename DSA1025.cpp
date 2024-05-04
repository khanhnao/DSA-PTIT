#include<bits/stdc++.h> 
using namespace std;

int n, ok, k;
char a[100]; 

void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 'A' - 1 + i;
	}
}

void sinh() {
	int i = k;
	while(i >= 1 && a[i] == 'A' + n - k + i - 1) {
		i--;
	}
	if (i == 0) {
		ok = 0;
	} else {
		a[i] = a[i] + 1;
		for (int j = i + 1; j <= n; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}


int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n >> k;
		ok = 1;
		ktao();
		while(ok) {
				for (int i = 1; i <= k; i++) {
					cout << a[i];
				}
				cout << endl;
			sinh();
		}
		//cout << endl;
	}
}