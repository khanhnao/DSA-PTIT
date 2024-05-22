#include <bits/stdc++.h>
using namespace std;

int n, p, s, prime[205];
vector<int> a;
vector<vector<int>> ans;
vector<int> tmp;

void sieve(int max_val) {
    for (int i = 2; i <= max_val; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= max_val; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= max_val; j += i) {
                prime[j] = 0;
            }
        }
    }
    for (int i = 2; i <= max_val; i++) {
        if (prime[i]) {
            a.push_back(i);
        }
    }
}

void Try(int i, int pos, int sum) {
    if (sum == s && i == n) {
        ans.push_back(tmp);
        return;
    }
    if (sum > s || i >= n) {
        return;
    }
    for (int j = pos; j < a.size(); ++j) {
        if (a[j] > p) {
            tmp.push_back(a[j]);
            Try(i + 1, j + 1, sum + a[j]);
            tmp.pop_back();
        }
    }
}

int main() {
    int t;
    cin >> t;
    sieve(200); 

    while (t--) {
        cin >> n >> p >> s;
        Try(0, 0, 0);
        cout << ans.size() << endl;
        for (auto& it : ans) {
            for (int num : it) {
                cout << num << " ";
            }
            cout << endl;
        }
        ans.clear(); 
    }
    return 0;
}