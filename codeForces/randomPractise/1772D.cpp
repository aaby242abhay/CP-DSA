#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int tt; cin >> tt;
	while(tt--){
		int n; cin >> n;
		vector<ll> a(n);
		for(int i=0; i<n; i++) cin >> a[i];
		
		int xMax = 0;
		ll xMin = int(1e9);
		
		for(int i=0; i<n-1; i++){
			if(a[i] < a[i+1]){
				xMin = min(xMin, (a[i] + a[i+1])/2 );
				
			}else if (a[i] > a[i+1]){
				int abc = (a[i]+a[i+1]+1)/2;

				xMax = max(xMax, abc);
				// cout << xMax << " ";
			}
		}
		// cout << xMin << " " << xMax << endl;
		
		// cout << endl;
		
		if(xMax > xMin) cout << "-1" << endl;
		else if(xMax == xMin) cout << xMax << endl;
		else cout << xMax  << endl;
	}
}