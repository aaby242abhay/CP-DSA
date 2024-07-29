#include <bits/stdc++.h>
using namespace std;

int main(){
	int a; cin >> a;
	string s; cin >> s;

	string ans = "";
	int i = 0;
	int n = 1;

	while(i<a){
		char ch = s[i];
		ans.push_back(ch);
		i+=n;
		n++;
	}

	cout << ans << endl;
}