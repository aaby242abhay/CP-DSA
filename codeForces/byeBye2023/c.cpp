#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;

void solve(){ 
    int n; cin >> n;
    ll v[n];
    for(int i=0; i<n; i++) cin >> v[i];

    int odd = 0;
    ll sum = 0;
    vector<ll> ans;
    for(int i=0; i<n; i++){
        sum+=v[i];
        if(v[i]%2){
            odd++;
        }
        if(i==0) ans.push_back(v[0]);
        else ans.push_back(sum - odd/3 - (odd%3)%2 );
    }
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
}
int main(){
    int tt; cin >> tt;
    while(tt--) solve();
}