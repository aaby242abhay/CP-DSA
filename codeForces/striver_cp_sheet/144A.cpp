#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	int iMaxi, iMini;
	int mini = INT_MAX;
	int maxi = INT_MIN;

	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i] > maxi){
			maxi = a[i];
			iMaxi = i;
		}
		if(a[i] <= mini){
			mini = a[i];
			iMini = i;
		}
	}

	int ans = iMaxi + n-iMini-1;
	if(iMaxi < iMini){
		cout << ans << endl;
	} else {
		cout << ans-1 << endl;
	}

	return 0;

}