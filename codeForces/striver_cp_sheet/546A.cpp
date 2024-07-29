#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	int k,w;
	cin >> k >> n >> w;

	long long ans = (k*w*(w+1))/2 - n;
	if(ans<=0) cout << "0" << endl;
	else cout << ans << endl;
}