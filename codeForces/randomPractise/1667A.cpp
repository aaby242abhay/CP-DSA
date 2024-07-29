#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main(){
	int n; cin >> n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	
	ll ans = LLONG_MAX;
	for(int i=0; i<n; i++){
		ll temp = 0;
		ll pf = 0;
		ll pb = 0;
		
		for(int j=i+1; j<n; j++){
			ll t = (pf/a[j]) + 1;
			pf = t * a[j];
			temp += t;
		}
		for(int j=i-1; j>=0; j--){
			ll t = (pb/a[j]) + 1;
			pb = t * a[j];
			temp += t;
		}

		ans = min(ans, temp);
	}
	cout << ans << endl;
}
