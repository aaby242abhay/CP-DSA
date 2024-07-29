#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	int a = n;
	int nD = 0;
	while(a){
		nD++;
		a = a/10;
	}
	a = n % 10;

	// cout << nD << endl;

	cout << (a-1)*10 + ((nD)*(nD+1))/2 << endl;
}

int main(){
	int tt; cin >> tt;
	while(tt--) solve();
}