#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	vector<int> a(2*n);
	for(int i=0; i<2*n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	cout << abs(a[n] - a[n-1]) << endl;
}
int main(){
	int tt; cin >> tt;
	while(tt--) solve();
}