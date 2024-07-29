#include<iostream>
#include<vector>

using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int> > > adj; 
    for(int i=0; i<m; i++){
        int u; cin >> u;
        int v; cin >> v;
        int w; cin >> w;
        
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }
    vector<int> slow(m);
    for(int i=0; i<m; i++) cin >> slow[i];

     
}
int main(){
    int tt; cin >> tt;
    while(tt--){
        solve();
    }
}