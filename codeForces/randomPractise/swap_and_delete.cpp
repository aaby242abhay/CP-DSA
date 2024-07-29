#include<iostream>
#include<vector>
#include<string>

using namespace std;

void solve(){
    string s; cin >> s;
    int c0=0, c1=0;
    for(auto i: s) {
        if(i=='0') c0++;
        else c1++;
    }
    if(c0==c1){
        cout << 0 << endl;
        return;
    }
    if(c0==0){
        cout<<c1<<endl;
        return;
    }
    else if(c1==0){
        cout << c0 <<endl;
        return;
    }
    for(auto i:s){
        if(i=='0') c1--;
        else c0--;
        if(c0<0){
            cout<<c1<<endl;
            return;
        }
        else if(c1<0){
            cout << c0 <<endl;
            return;
        }   
    }
    
}
int main(){
    int tt; cin >> tt;
    while(tt--) solve();
}