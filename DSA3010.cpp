#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        priority_queue<int, vector<int>, greater<int>> pq; 
        for (int i = 0; i < n; i++) {
            int len; cin >> len;
            pq.push(len);
        }
        
        long long cost = 0;
        while (pq.size() > 1) { 
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            int combined = first + second;
            cost += combined;
            pq.push(combined);
        }
        
        cout << cost << endl;
    }
}
