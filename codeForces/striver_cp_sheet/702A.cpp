#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];

	int i=0;
	int j=1;
	int maxi = 1;
	while(j<n){
		if(a[j] > a[j-1]){
			
			j++;
			maxi = max(maxi, j-i);
		} else {
			i=j;
			j++;
		}
	}
	cout << maxi << endl;
}