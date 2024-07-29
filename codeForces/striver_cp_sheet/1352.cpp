#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n; cin >> n;
	vector<int> ans;
	int k = 0;
	int z = 0;
	while(n){
		int a = n%10;
		if(a){
			a = a*pow(10,z);
			ans.push_back(a);
			k++;
		}
		z++;
		n = n/10;
	}
	cout << k << endl;
	for(int i=0; i<ans.size(); i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	return ;
}

int main(){
	int tt; cin >> tt;
	while(tt--) solve();
}