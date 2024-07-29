#include<iostream>
#include<vector>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> ans(n);
    for(int i=0; i<n; i++) ans[i] = i+1;
    reverse(ans.begin()+k, ans.end());
    for(auto i: ans) cout << i << " ";
    cout << endl;

}
int main(){
    int tt; cin >> tt;
    while(tt--){
        solve();
    }
}