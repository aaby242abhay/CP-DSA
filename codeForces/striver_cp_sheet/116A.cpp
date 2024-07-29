#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	vector<pair<int,int>> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i].first >> v[i].second;
	}
	int p = 0;
	int maxi = INT_MIN;
	for(int i=0; i<n; i++){
		p = p + v[i].second - v[i].first;
		maxi = max(maxi, p);
	}
	cout << maxi << endl;
	return 0;
}