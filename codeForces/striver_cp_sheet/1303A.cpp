#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s; cin >> s;
	int ans = 0;
	int n = s.size();
	int i=0, j=n-1;
	int n0 = 0;
	while(s[i]=='0' && i<n){
		ans++;
		i++;
	}
	while(j>=0 && s[j]=='0'){
		ans++;
		j--;
	}
	for(auto it : s){
		if(it == '0') n0++;
	}
	ans = n0 - ans;
	if(ans<0) ans = 0;

	cout << ans << endl;

}

int main(){
	int tt; cin >> tt;
	while(tt--) solve();
}