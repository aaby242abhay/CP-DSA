#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	vector<string> str(5);
	for(int i=0; i<5; i++){
		cin >> str[i];
	}
	for(auto it : str){
		if(s[0] == it[0] || s[1] == it[1]){
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}