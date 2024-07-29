#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int totalDrink = (k*l)/nl;
	int limeSlices = c*d;
	int saltPerDrink = p/np;

	int ans = min(totalDrink, min(limeSlices, saltPerDrink));
	ans = ans/n;
	cout << ans << endl;

}