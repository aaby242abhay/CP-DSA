#include <bits/stdc++.h>

using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
    long long n;
    cin>>n;
    long long count = sqrtl(n);
    if(n%2!=0){
        count++;
    }
    cout<<count/2<<"\n";
    }
    return 0;
}