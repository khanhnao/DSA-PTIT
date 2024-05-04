#include<bits/stdc++.h> 
using namespace std;

int MAX = 1000;

void BubbleSort(int a[], int length) {
	int b = 1;
	for (int i = 0; i < length - 1; i++) {
		bool k = false;
		for (int j = 0; j < length - 1; j++) {
			if(a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				k = true;
			}
		}
		if (k == false) break;
		cout << "Buoc " << b++ << ": ";
		for (int i = 0; i < length; i++) cout << a[i] << " ";
		cout << endl;
	}
}

int main() {
	int n;
	int a[MAX]; 
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	BubbleSort(a, n);
}