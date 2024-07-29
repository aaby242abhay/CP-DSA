#include<bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;

	for(int i=0; i<s.size(); i++){
		if(i==0 && s[i]=='9') continue;
		int a = s[i] - '0';		//converting an numeral to ant int
		if(a>=5 ){
			a = 9-a;
			s[i] = char(a+'0');	//converting the char to an int
		}
	}

	long long ans = stoll(s);

	cout << ans << endl;

	return 0;	
}