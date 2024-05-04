#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, p;
        cin >> n >> m >> p;

        vector<long long> A(n), B(m), C(p);

        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < m; i++)
            cin >> B[i];
        for (int i = 0; i < p; i++)
            cin >> C[i];

        vector<long long> result;

        int i = 0, j = 0, k = 0;

        while (i < n && j < m && k < p) {
            if (A[i] == B[j] && B[j] == C[k]) {
                result.push_back(A[i]);
                i++;
                j++;
                k++;
            } else if (A[i] < B[j]) {
                i++;
            } else if (B[j] < C[k]) {
                j++;
            } else {
                k++;
            }
        }

        if (result.empty()) {
            cout << "-1" << endl;
        } else {
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
            cout << endl;
        }
    }
    return 0;
}