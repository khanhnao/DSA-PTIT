#include<bits/stdc++.h>
using namespace std;

int n, k;
vector <int> a, b;
vector <vector<int>> res;

void pb() {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if(a[i] == 1) {
			sum += b[i];
		}
	}
	if (sum == k) {
		res.push_back(a);
	}
}

void backtrack (int i) {
	for (int j = 1; j >= 0; j--) {
		a[i] = j;
		if (i == n - 1) {
			pb();
		} else {
			backtrack(i + 1);
		}
	}
}

int main(){
    int t; cin >> t;
    while (t--) {
    	cin >> n >> k;
	    a.resize(n, 0);
	    b.resize(n, 0);
	    for (int i = 0; i < n; i++) {
	    	cin >> b[i];
		}
		sort (b.begin(), b.end());
		backtrack(0);
		if (res.size() > 0) {
			for (int i = 0; i < res.size(); i++) {
				bool isFinal = true;
				cout << "[";
				for (int j = 0; j < res[i].size(); j++) {
					if (res[i][j] == 1) {
						if (!isFinal) {
							cout << " ";
						}
						cout << b[j];
						isFinal = false;
					}
				}
				cout << "] ";
			}
		} else {
			cout << "-1";
		}
		res.clear();
		cout << endl;
	}
}
