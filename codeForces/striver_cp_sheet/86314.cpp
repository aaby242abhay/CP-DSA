#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n; cin >> n;
	if(n==1){
		cout << "1" << endl;
		return;
	}
	cout << "2" << endl;
	int b = n-2;
	cout << n << " " << n-1 <<endl;
	while(b--){
		cout << n << " " << n-2 << endl;
		n--;

	}

}

int main(){
	int tt; cin >> tt;
	while(tt--) solve();
}