#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include<algorithm>
typedef long long int ll;

using namespace std;

void solve(){
	ll n, k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i=0; i<n; i++) cin >> v[i];

	if(k>=3){
		cout << "0" << endl;
		return;
	}
	sort(v.begin(), v.end());
	ll d = v[0];
	for(int i=0; i<n-1; i++){
		d = min(d,v[i+1]-v[i]);
	}
	if(k==1){
		cout << d << endl;
		return;
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j) continue;
			ll diff = abs(v[i]-v[j]);
			auto ind = lower_bound(v.begin(), v.end(), diff) - v.begin();
			if(ind < n) d = min(d, abs(v[ind] - diff));
			if(ind > 0) d = min(d, abs(diff - v[ind-1]));
		}
	}
	cout << d << endl;
	return;

}
int main(){
	int tt; cin >> tt;
	while(tt--) solve();
}