#include<iostream>
#include<vector>
#include<set>


using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
       int n; cin >> n;
       vector<int> arr(n);
       for(int i=0; i<n; i++) cin >> arr[i];

       int mini = arr[0];
       int ans = 0;
       for(int i=0; i<n-1; i++){
            if(mini > arr[i+1]) ans++;
            mini = max(mini, arr[i+1]);
       }

       cout << ans << endl;
    }
    return 0;
}