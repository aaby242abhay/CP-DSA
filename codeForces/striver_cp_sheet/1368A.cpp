#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a, b, n; cin >> a >> b >> n;

	int ans = 0;
	if(b>a) swap(a,b);
	
	while(a<=n && b<=n){
	 	
	 	if(ans%2==0){
	 		b+=a;
	 		ans++;
	 	}else{
	 		a+=b;
	 		ans++;
	 	}		
	}
	cout << ans << endl;


}
int main(){
	int tt; cin >> tt;
	while(tt--) solve();
}