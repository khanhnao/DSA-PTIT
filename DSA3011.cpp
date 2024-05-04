#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		long long n; cin >> n;
		long long a[n];
		long long mod = 1e9 + 7;
		priority_queue <long long, vector<long long>, greater<long long>> pq;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			pq.push(a[i]);
		}
		long long cost = 0;
		while (pq.size() > 1) { 
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            long long combined = (first % mod + second % mod) % mod;
            cost = (cost % mod + combined % mod) % mod;
            pq.push(combined);
        }
		cout << cost << endl;
	}
}