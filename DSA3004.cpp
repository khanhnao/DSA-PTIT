#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--) {
        int n, z;
        cin >> n;
        vector <int> v;
        for (int i = 0; i < n; i++) {
        	cin >> z;
        	v.push_back(z);
		}
		sort(v.begin(), v.end());
		long long x = 0, y = 0;
		for (int i = 0; i < v.size(); i += 2) {
			x = x * 10 + v[i];
		}
		for (int i = 1; i < v.size(); i += 2) {
			y = y * 10 + v[i];
		}
		cout << x + y << endl;
    }
}
