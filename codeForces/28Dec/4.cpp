#include<iostream>
#include<vector>
#include<set>
typedef long long ll;

using namespace std;

void solve(){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            int t; cin >> t;
            if(i%2==0) a[i] = -1*t;
            else a[i] = t;
        }
        // for(int i=0; i<n; i++){
        //     cout << a[i] << endl;
        // }
        ll sum = 0;
        set<ll> st;
        st.insert(0);
        for(int i=0; i<n; i++){
            sum += a[i];
            if(st.find(sum) != st.end()){
                cout << "Yes" << endl;
                return;
            }
            else st.insert(sum);

        }
        cout << "No" << endl;
        
}
int main(){
    int tt; cin >> tt;
    while(tt--){
        solve();
    }
}
