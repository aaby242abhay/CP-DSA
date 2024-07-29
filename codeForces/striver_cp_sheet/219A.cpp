#include <bits/stdc++.h>
using namespace std;

int main(){
	int k; cin >> k;
	string s; cin >> s;
	vector<int> v(26);
	for(auto it : s){
		v[it-'a']++;
	}
	// for(int i=0; i<v.size(); i++){
	// 	cout << v[i] << endl;
	// }

	string ans = "";
	
	for(int i=0; i<26; i++){
		if(v[i] % k == 0){
			int m = v[i]/k;
			char ch = i + 'a';
			while(m--) ans.push_back(ch);

		} else{
			cout << "-1" << endl;
			return 0;
		}
	}
	while(k--) cout<< ans;
	return 0;

}