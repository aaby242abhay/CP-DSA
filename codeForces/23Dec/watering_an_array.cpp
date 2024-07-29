#include<vector>
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, d;
        cin >> n; cin >> k; cin >> d;
        vector<int> a;
        for(int i=0; i<n; i++){
            int s; cin >> s;
            a.push_back(s);
        }
        vector<int> b;
        for(int i=0; i<n; i++){
            int s; cin >> s;
            b.push_back(s);
        }
        vector<int> diff;
        int score = 0;
        for(int i=0; i<n; i++){
            int z = a[i]-i-1;
            if(z==0) score++;
            diff.push_back( z );
        }

        int maxi = score;
        



    }
}