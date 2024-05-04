#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &a) {
    cout << "[";
    for (int i = 0; i < a.size() - 1; i++) {
        cout << a[i] << " ";
    }
    cout << a[a.size() - 1] << "] ";
}

void Try(vector<int> &a) {
    vector<vector<int>> res;
    res.push_back(a);
    while (a.size() > 1) {
        vector<int> temp;
        for (int i = 0; i < a.size() - 1; i++) {
            temp.push_back(a[i] + a[i + 1]);
        }
        res.push_back(temp);
        a = temp;
    }
    for (auto it = res.rbegin(); it != res.rend(); it++) {
        print(*it);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Try(a);
        cout << endl;
    }
    return 0;
}
