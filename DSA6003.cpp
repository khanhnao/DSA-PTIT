#include<bits/stdc++.h>
using namespace std;

void sort(int a[], int n) {
	int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (a[min_index] > a[j]) {
				min_index = j;
			}
		}
		if (min_index != i) {
			cnt++;
		}
		swap(a[min_index], a[i]);
	}
	cout << cnt << endl;
}

int main(){
    int t; cin >> t;
    while(t--) {
    	int n; cin >> n;
    	int a[1000];
    	for (int i = 0; i < n; i++) {
    		cin >> a[i];
		}
		sort(a, n);
	}
}
