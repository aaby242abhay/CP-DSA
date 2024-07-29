#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> a(n), d(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> d[i];
    
    unordered_map<int,int> mp;
    
    for(int i=0; i<n; i++){
        if(mp.find(a[i]) == mp.end()){
            mp.insert({a[i], 1});
        } else {
            mp[a[i]]++;
        }
        if(mp.find(d[i]) == mp.end()){
            mp.insert({d[i], 1});
        } else {
            mp[d[i]]++;
        }
    }
    int mini = INT_MIN;
    for(auto it: mp){
        mini = max(mini, it.second);
    }
    cout << mini << endl;
    
}
int main() {
	int tt; cin >> tt;
	while(tt--) solve();

}
