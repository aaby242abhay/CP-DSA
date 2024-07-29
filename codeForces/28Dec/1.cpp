#include<iostream>

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int a,b,c;
        cin >> a; cin>>b; cin >> c;
        if(a==b) cout << c <<endl;
        else if(b==c) cout << a << endl;
        else cout << b << endl;
    }
    return 0;
    
}