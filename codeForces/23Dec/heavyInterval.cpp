#include<vector>
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> l,r,c;
        for(int i=0; i<n; i++){
            long long a; cin >> a;
            l.push_back(a);
        }
        for(int i=0; i<n; i++){
            long long a; cin >> a;
            r.push_back(a);
        }
        for(int i=0; i<n; i++){
            long long a; cin >> a;
            c.push_back(a);
        }

        long long ans = 0;
        sort(l.begin(), l.end());
        sort(r.begin(), r.end());
        sort(c.begin(), c.end());

        vector<long long> diff;
        for(int i=0; i<n; i++){
            diff.push_back(r[i] - l[i]);
        }

        sort(diff.begin(), diff.end());
        for(int i=0; i<n; i++){
            ans += diff[i]*c[n-1-i];
        }

        cout << ans << endl;

    }
    return 0;
}