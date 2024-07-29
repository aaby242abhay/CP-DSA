#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;

long long res(long long i){
	return ((i)*(i+1)*(i+2))/6;
}

int main(){
	int n; cin >> n;

	ll low = 0;
	ll high = n;

	while(low<=high){
		ll mid = low + (high - low)/2;
		ll a = res(mid);
		if(a == n){
			cout << mid << endl;
			return 0;
		}
		if(a<n) low = mid + 1;
		else high = mid - 1;
	}

	cout << high << endl;
	return 0;


}