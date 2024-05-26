#include <bits/stdc++.h>
using namespace std;

int n;
int SR[100005], GR[100005];

void greater_right(int a[]) {
	stack<int> st;
	for (int i = n - 1; i >= 0; i--) {
		while(!st.empty() && a[i] >= a[st.top()]) st.pop();
		if(st.empty()) GR[i] = -1;
		else {
			GR[i] = st.top();
		}
		st.push(i);
	}
}

void smaller_right(int a[]) {
	stack<int> st;
	for (int i = n - 1; i >= 0; i--) {
		while(!st.empty() && a[i] <= a[st.top()]) st.pop();
		if(st.empty()) SR[i] = -1;
		else {
			SR[i] = st.top();
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
		greater_right(a);
		smaller_right(a);
		for (int i = 0; i < n; i++) {
			if(GR[i] != -1 && SR[GR[i]] != -1) {
				cout << a[SR[GR[i]]] << " ";
			} else {
				cout << -1 << " ";
			}
		}
		cout << endl;
	}
}