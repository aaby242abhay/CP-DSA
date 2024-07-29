#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; i++) cin >> arr[i];
	
	set<int> st;
	

	st.insert(0);
	for(int i=0; i<n; i++){
		vector<int> temp(st.size());
		for(auto it: st){
			temp.push_back(it + arr[i]);
		}
		for(auto it: temp){
			st.insert(it);
		}
	}
	auto it = st.find(0);
	st.erase(it);
	cout << st.size() << endl;
	for(auto it : st){
		cout << it << " ";
	}
	cout << endl;
}