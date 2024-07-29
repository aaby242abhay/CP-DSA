#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	string ans = "";

	for(auto it : s){
		if(it=='a' || it == 'A' || it=='e' || it=='E' || it=='i' || it=='I' || it=='o'
		 || it=='O' || it=='u' || it=='U' ||it=='y' ||it=='Y'){
			continue;
		}
		ans.push_back('.');
		if(it>='A' && it<='Z'){
			ans.push_back(it + 'a' - 'A');
		}else{
			ans.push_back(it);
		}
	}
	cout << ans << endl;
}