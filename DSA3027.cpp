#include<bits/stdc++.h>
using namespace std;


int main() {
	int n;
	long long x, s = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		s += x + abs(x);
	}
	cout << s;
}