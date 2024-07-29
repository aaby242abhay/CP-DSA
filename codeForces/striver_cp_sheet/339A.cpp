#include <bits/stdc++.h>
using namespace std;

int main(){
	string str; cin >> str;

	vector<int> a;
	for(auto it : str){
		if(it!='+') a.push_back(it);
	}

	sort(a.begin(), a.end());
	string ans = "";
	for(auto it : a){
		ans.push_back(it);
		ans.push_back('+');
	}
	ans.pop_back();
	cout << ans << endl;
}