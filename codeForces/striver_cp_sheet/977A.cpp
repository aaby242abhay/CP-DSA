#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int k; cin >> k;

	while(k){
		int l = n%10;
		if(l){
			if(k>=l){
				n = n-l;
				k = k-l;
			} else {
				n = n-k;
				k = 0;
			}
		} else {
			k--;
			n=n/10;
		}
	}
	cout << n << endl;
}