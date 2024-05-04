#include<bits/stdc++.h>
using namespace std;

struct job {
	int id, deadline, profit;
};

bool cmp(job a, job b) {
	return a.deadline > b.deadline;
}

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		job a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i].id >> a[i].deadline >> a[i].profit;
		}
		sort(a, a + n, cmp);
		priority_queue <int> pq;
		int cur_day = a[0].deadline;
		int idx = 0, cnt = 0;
		long long res = 0;
		while(cur_day >= 1) {
			while(idx < n && a[idx].deadline >= cur_day) {
				pq.push(a[idx].profit);
				idx++;
			}
			if(!pq.empty()) {
				cnt++;
				res += pq.top();
				pq.pop();
			}
			cur_day--;
		}
		cout << cnt << " " << res << endl;
	}
}