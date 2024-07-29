#include<iostream>
#include<string>
#include<vector>

using namespace std;

void solve(){
    string s; cin>> s;
    int n = s.size();
    int f= n/2;
    int bw=n-f;


    int a = stoi(s.substr(0,f));
    int b = stoi(s.substr(f));
    if(a<b){
        cout << a << " " << b << endl;
    }
    else cout << "-1" << endl;

}

int main(){
    int tt; cin >> tt;
    while(tt--) solve();
}