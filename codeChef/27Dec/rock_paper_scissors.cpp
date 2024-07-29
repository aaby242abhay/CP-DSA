#include<iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        string str; cin >> str;
        
        string ans = str;
        int p=0;
        int win = n/2 + 1;
        // cout<< win << endl;
        int loss = n-win;
        for(int i=0; i<loss; i++) ans[i]='P';
        for(int i=loss; i<n; i++){
            if(str[i]=='P') ans[i]='S';
            else if(str[i]=='S') ans[i]='R';
            else ans[i]='P';
        }
        int draw = 0;
        int lossR = 0;
        for(int i=0; i<loss; i++){
            // if(str[i]=='P') lossP++;
            if(str[i]=='R') lossR++;
            if(str[i]=='P') draw++;
        }
        
        int change = lossR + draw/2;
        int index = loss;
        // cout << lossR << " " << lossP << " " << index<< endl;
        while(change > 0 && index < n){
            if(ans[index]=='P'){
                index++;
                continue;
            }
            else{
                ans[index]='P';
                change--;
                index++;
            }

        }

        cout << ans << endl;
    }
}