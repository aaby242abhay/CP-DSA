#include<vector>
#include<cmath>
#include<set>

#include<iostream>

using namespace std;

int check(int i, vector<long long> &nums){
    set<long long> st;
    for(auto num : nums){
        long long rem = num%i;
        st.insert(rem);
    }
    int count = st.size();
    st.clear();
    if(count == 1) return 1;
    if(count > 2) return 3;
    if(count == 2) return 2;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> nums;
        for(int i=0; i<n; i++){
            long long a;
            cin >> a;
            nums.push_back(a);
        }
        bool oddFlag = false;
        bool evenFlag = false;
        for (auto i : nums){
            if(i%2 == 0) evenFlag = true;
            else oddFlag = true;
        }
        if((oddFlag && evenFlag)) {
            cout << "2" << endl;
        } else {
            long long low = 2;
            long long high = pow(10,17);
            long long mid = (high+low)/2;
            
            while(low<=high){
                int res = check(mid,nums);
                if( res == 2) {
                    cout << mid << endl;
                    continue;
                }
                else if(res == 3){
                    high = mid - 1;
                } else {
                    low = mid -1;
                }
            }
        }
    }
    return 0;
}