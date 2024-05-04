#include<bits/stdc++.h>
using namespace std;

void greedy(int n, int money[], int length, int ans[]) {
    for(int i = length - 1; i >= 0; i--) { 
        ans[i] = 0;
        while(n >= money[i]) { 
            n -= money[i];
            ans[i]++;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int money[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int ans[10] = {};
        greedy(n, money, 10, ans);
        int a = 0;
        for(int i = 0; i < 10; i++) {
            if (ans[i]) {
                a += ans[i];
            }
        }
        cout << a << endl;
        memset(ans, 0, sizeof(ans));
    }
}
