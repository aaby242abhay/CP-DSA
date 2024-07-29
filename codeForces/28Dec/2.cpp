#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        vector<vector<char> > grid(3,vector<char>(3));
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin >> grid[i][j];
            }
        }
        vector<int> ans(3);
        for(int i=0; i<3; i++) ans[i] = 0;
        bool flag = false;
        int i=0, j=0;
        for( i=0; i<3; i++){
            for(j=0; j<3; j++){
                if(grid[i][j]=='?'){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        for(int k=0; k<3; k++){
            if(grid[i][k]=='A') ans[0]=1;
            else if(grid[i][k]=='B') ans[1]=1;
            else if(grid[i][k]=='C') ans[2]=1;

        }
        for(int k=0;k<3;k++){
            if(ans[k]==0){
                if(k==0) cout << 'A' << endl;
                else if(k==1) cout << 'B' << endl;
                else cout << 'C' << endl;
            }
        }
    }
}