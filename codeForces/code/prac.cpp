#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool canPair(vector<int> &nums, int k) {
        int n = nums.size();
        if(n%2==1) return false;
        for(int i=0; i<n; i++){
        	nums[i] = nums[i]%k;
        }
        sort(nums.begin(), nums.end());
       
        
        int cnt0 = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 0) cnt0++;
            else break;
        }
        if(cnt0%2==1) return false;
         
        for(int i=cnt0; i<cnt0+(n-cnt0)/2; i++){
        	int a = (nums[i] + nums[n-i+cnt0-1])%k;
        	cout << a << " ";
            if( a!=0 ){
                return false;
            }
        }
        return true;
}

int main(){
	int s; cin >> s;
	vector<int> nums(s);
	for(int i=0; i<s; i++){
		cin >> nums[i];
	}
	int k; cin >> k;

	cout << canPair(nums,k)<< endl;

}