#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve(){
	int n; cin >> n;
	string s; cin >> s;
	map<ll,ll> mp;
	mp[0] = 1;
	ll sum = 0;
	ll ans = 0;
	for(int i=0; i<n; i++){
		sum += s[i]-'0' -1;
		mp[sum]++;
	}
	for(auto it:mp){
		ll x = it.second;
		
		ans += (x)*(x-1)/2;
	}
	cout << ans << endl;
}
int main(){
	int tt; cin >> tt;
	while(tt--) solve();
}