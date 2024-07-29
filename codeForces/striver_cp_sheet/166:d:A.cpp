#include <bits/stdc++.h>
using namespace std;


int kama(int n){
	set<int> st;
	while(n){
		st.insert(n%10);
		n=n/10;
	}
	return st.size();
}
int main(){
	int n;
	cin >> n;
	
	bool flag = true;
	
	int m = n+1;
	while(flag){
		if(kama(m)==4){
			flag = false;
		}else{
			m++;
		}
	}
	cout << m << endl;
}