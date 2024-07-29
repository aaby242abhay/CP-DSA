#include<string>
#include<iostream>
#include<set>


using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n; cin>>n;
        string str; cin >> str;
        int count = 0;
        set<char> st;

        for(int i=0; i<n; i++){
            if(st.find(str[i]) == st.end()){
                count += n-i;
                st.insert(str[i]);
            }

        }
        cout << count << endl;
    }
    return 0;
}