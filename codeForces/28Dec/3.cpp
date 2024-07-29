#include<iostream>
#include<math.h>
#include<vector>
typedef unsigned long long ll;

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<long long> a(n);
        long long sum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }
        // long double root = pow(sum,0.5);
        // // cout << floor(root) << " "<<root<< endl;
        // if(floor(root) == root){
        //     cout << "YES" << endl;
        // }
        // else cout << "NO" << endl;

        ll low = 0;
        ll high = sum;

        while(low<=high){
            ll mid = low + (high-low)/2;
            if(mid*mid==sum){
                low = mid;
                break;
            }
            if(1ll*mid*mid<sum) low = mid+1;
            else high = mid-1;
        }
        if(low*low == sum){
            cout << "yes" << endl;
        } else cout << "No" << endl;

        

    }
}