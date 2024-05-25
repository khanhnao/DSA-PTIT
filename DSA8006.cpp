#include <bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		long long n; cin >> n;
		queue<long long> q;
		q.push(9);
		while(q.size()) {
			long long tmp = q.front();
			q.pop();
			if(tmp % n == 0) {
				cout << tmp;
				break;
			}
			q.push(tmp * 10 + 0);
			q.push(tmp * 10 + 9);
		}
		cout << endl;
	}
}