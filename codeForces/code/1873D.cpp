#include<iostream>
#include <vector>

using namespace std;


void solve(){
	int n, k;
	cin >> n >> k;
	string s; cin >> s;

	int ans = 0;
	int i = 0;
	while(i<n){
		if(s[i]=='W'){
			i++;
		}else{
			i+=k;
			ans++;
		}
	}
	cout << ans << endl;
}
int main(){
	int tt; cin >> tt;
	while(tt--) solve();
}