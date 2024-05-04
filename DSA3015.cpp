#include<bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		int n, m, s;
		cin >> n >> s >> m;
		int song = m * s;
		int ngayDiCho = s - s / 7;
		int mua = ngayDiCho * n;
		if (mua < song) {
			cout << -1;
		} else {
			cout << (song + n - 1) / n;
		} 
		cout << endl;
	}
}