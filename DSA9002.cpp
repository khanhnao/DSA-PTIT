#include<bits/stdc++.h> 
using namespace std;



int main() {
	int n; cin >> n;
	cin.ignore();
	vector <pair<int, int>> e;
	for (int i = 1; i <= n; i++) {
		string s, num; getline (cin, s);
		stringstream ss(s);
		while (ss >> num) {
			if(stoi(num) > i){
				e.push_back({i, stoi(num)});
			}
		}
	}
	for (auto it : e) {
		cout << it.first << " " << it.second << endl; 
	}
}