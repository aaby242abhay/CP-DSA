#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<pair<long long,long long> > vec(n);
        for(int i=0; i<n; i++){
            cin >> vec[i].first;
            cin >> vec[i].second;
        }
        sort(vec.begin(), vec.end());

        int ans = 0;

        for(int i=0; i<n-1; i++){
            int a = vec[i].second;
            for(int j=i+1; j<n; j++){
                if(vec[j].second < a){
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}