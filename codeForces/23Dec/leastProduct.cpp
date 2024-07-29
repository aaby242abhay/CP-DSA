#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums;
        for(int i=0; i<n; i++){
            int a; cin >> a;
            nums.push_back(a);
        }
        
        bool allPos = true;
        bool zeroPres = false;

        for(auto i : nums){
            if( i == 0){
                zeroPres = true;
                break;
            }
            if(i<0){
                allPos = !allPos;
            }
        }
        if(zeroPres){
            cout << "0" << endl;
            continue;
        }
        if(allPos){
            cout << "1" << endl;
            cout << "1" << " " << "0" << endl;
        } else {
            cout << "0" << endl;
        }

    }
    return 0;
}
