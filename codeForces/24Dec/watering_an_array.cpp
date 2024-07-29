#include<vector>
#include<iostream>

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n, k, d;
        cin >> n; cin >> k; cin >> d;
        vector<int> a(n); 
        for(int i=0; i<n; i++) cin >> a[i];
        vector<int>b(k);
        for(int i=0; i<k; i++) cin >> b[i];
        
        int score = 0;

        for(int i=0; i<d && i <= 2*n; i++){
            int cur = 0;
            for(int j=0; j<n; j++) cur += (a[j] == j+1);
            cur += (d-i-1)/2;
            if(score < cur) score = cur;
            for(int j=0; j<b[i%k]; j++) a[j]++;
        }
        cout << score << endl;

    }
}