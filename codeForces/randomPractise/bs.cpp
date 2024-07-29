#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	
	cout << "Running" << endl;
	int n, k; cin >> n >> k;
	vector<ll> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	vector<ll> q(k);
	for(int i=0; i<k; i++) cin >> q[i];
	

	for(int i=0; i<k; i++){
		ll low = 0;
		ll high = n-1;
		while(low<=high){
			ll mid = (high + low)/2;
			if(v[mid] == q[i]){
				cout << "YES" << endl;
				break;
			}
			else if (v[mid] > q[i]) high = mid-1;
			else low = mid + 1;
		}
		
	}
	return 0;
	
}