#include<iostream>
#include<vector>

typedef long long ll;
using namespace std;

ll gcd(ll a, ll b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}
void solve(){

    vector<ll> v(2);
    for(int i=0; i<2;i++) cin>>v[i];
    ll a = v[0];
    ll b = v[1];
    
    ll ans =0;
    if(v[0] == 1){
        ans = b*b;
        cout << ans << endl;
        return;
    }
    else if(b%a==0){
        ans = b*b/a;
        cout << ans << endl;
        return;
    }
    ll c= gcd(a,b);


    for(int i=0; i<2; i++){
        v[i] = v[i]/c;
    }
    if(v[0] == 1){
        ans = c*v[1]*v[1];
    }else{
        ans = c*v[0]*v[1];
    }

    cout << ans << endl;
    return;

}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;

}