#include<bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--) {
		int sum, n; cin >> sum >> n;
		if (n * 9 < sum || sum == 0 && n > 1) {
			cout << -1;
		} else {
			string res = string(n, '0');
			for (int i = n - 1; i >= 0; i--) {
				if(sum > 9) {
					res[i] = '9';
					sum -= 9;
				} else {
					if (i != 0) {
						res[0] = '1';
						res[i] += (sum - 1);
						cout << res;
						break;
					} else {
						res[i] += sum;
						cout << res;
						break;
					}
				}
			}	
			//cout << res;	
		}
		cout << endl;
	}
}