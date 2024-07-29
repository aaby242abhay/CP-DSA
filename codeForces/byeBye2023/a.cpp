#include<iostream>
#include<vector>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for(int i=0; i<n; i++) cin >> b[i];
    int prod = 1;
    for(auto i: b){
        prod *= i;
        if(2023%prod!=0){
            cout << "No" <<endl;
            return;
        }
        
    }
    vector<int> ans(k);
    for(int i=0; i<k; i++) ans[i]= 1;
    cout << "Yes" << endl;
    int a = 2023/prod;
    ans[k-1] = a;
        for(int i=0; i<k; i++){
            cout << ans[i]<< " ";
        }
    
    

}
int main(){
    int tt; cin >> tt;
    while(tt--) solve();
}