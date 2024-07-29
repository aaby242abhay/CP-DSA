#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


ll res(ll a){
	if(a<=1) return 0;
	else return (a*(a-1))/2;
}

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];

	unordered_map<ll, ll> mp;
	for(int i=0; i<n; i++){
		int val = a[i] - i;
		if(mp.find(val) == mp.end()){
			mp.insert({val, 1});
		} else {
			mp[val]++;
		}
	}

	// for(auto it: mp){
	// 	cout << it.first << " " << it.second << endl;
	// }

	ll ans = 0;
		for(auto it : mp){
		ans += res(it.second);
	}
	cout << ans <<endl;
}
int main(){
	int tt; cin >> tt;
	while(tt--) solve();
}