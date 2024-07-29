#include <bits/stdc++.h>
using namespace std;



int main(){
	vector<double> m(5);
	vector<double> w(5);
	vector<double> h(2);
	vector<int> x = {500, 1000, 1500, 2000, 2500};
	for(int i=0; i<5; i++) cin >> m[i];
	for(int i=0; i<5; i++) cin >> w[i];
	for(int i=0; i<5; i++) cin >> h[i];
		
	double ans = 0;

	for(int i=0; i<5; i++){
		ans += max(0.3*x[i], (1-m[i]/250)*x[i] - 50*w[i]);
	}
	
	ans += h[0]*100 - h[1]*50;
	cout << ans << endl;
	
}