#include <bits/stdc++.h>

using namespace std;

int main(){
	string a; cin >> a;
	set<int> st;
	for(auto i : a){
		st.insert(i);
	}

	if(st.size()%2){
		cout << "IGNORE HIM!" << endl;
	}else{
		cout << "CHAT WITH HER!" << endl;
	}
}