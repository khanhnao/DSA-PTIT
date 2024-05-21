#include<bits/stdc++.h>
using namespace std;

void xuly(int n, char a, char c, char b) {
	if(n == 0) return;
	xuly(n - 1, a, b, c);
	cout << a << " -> " << c << endl;
	xuly(n - 1, b, c, a);
}

int main() {
	int n; cin >> n;
	xuly(n, 'A', 'C', 'B');
}