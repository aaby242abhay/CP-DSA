#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
void solve(){
    int n; cin >> n;
    string str; cin >> str;
    string ans = "";
    for(int i=n-1; i>0; i--){
        if( isVowel(str[i]) && !isVowel(str[i-1] )){
            ans+=str[i];
            ans+=str[i-1];
            ans+='.';
            i--;
        } else {
            ans+=str[i];
        }
    }
    ans.pop_back();
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;

}
int main(){
    int tt; cin >> tt;
    while(tt--) solve();
}