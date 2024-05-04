#include <bits/stdc++.h>
using namespace std;

void sort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min_index]) {
				min_index = j;
			}
		}
		swap(a[i], a[min_index]);
		cout << "Buoc " << i + 1 << ": ";
		for (int i = 0; i < n; i++) cout << a[i] << " ";
		cout << endl;
	}
}

int main() {
	int n; cin >> n;
	int a[n];
	for (int i = 0; i <n; i++) cin >> a[i];
	sort(a, n);
}