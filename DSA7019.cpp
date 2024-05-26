#include <bits/stdc++.h>
using namespace std;

int n;
int L[100005], R[100005];

void smaller_left(int a[]) {
	stack<int> st;
	for (int i = 0; i < n; i++) {
		while(!st.empty() && a[i] <= a[st.top()]) st.pop();
		if(st.empty()) L[i] = -1;
		else {
			L[i] = st.top();
		}
		st.push(i);
	}
}

void smaller_right(int a[]) {
	stack<int> st;
	for (int i = n - 1; i >= 0; i--) {
		while(!st.empty() && a[i] <= a[st.top()]) st.pop();
		if(st.empty()) R[i] = n;
		else {
			R[i] = st.top();
		}
		st.push(i);
	}
}

int main() {
	int t; cin >> t;
	cin.ignore();
	while(t--) {
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		smaller_left(a);
		smaller_right(a);
		long long res = 0;
		for (int i = 0; i < n; i++) {
			int r = R[i] - L[i] - 1;
			long long s = 1ll * r * a[i];
			res = max(res, s);
		}
		cout << res << endl;
	}
}