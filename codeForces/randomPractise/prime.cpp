#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<bool> isPrime(N,1);			//making a vector<bool> of size N and making everyone false
vector<int> lp(N,0), hp(N,1);


int main(){
	isPrime[0] = isPrime[1] = false;
	for(int i=2; i<N; i++){
		if(isPrime[i]){
			lp[i] = hp[i] = i;			//the lowest and the highest prime no for 'i' will be the prime no itself
			for(int j=2*i; j<N; j+=i){
				isPrime[j] = false;
				hp[j] = i;				//as i is increasing keep changing the highest Prime
				if(lp[j] == 0) lp[j] = i;		//in computing the lowest prime we only need to mark it the first time
				
			}
			
		}
	}
	
	// for(int i=1; i<=100; i++){
	// 	cout << "i = " << i << " lp = " << lp[i] << ", hp = "<< hp[i] << endl;
	// }
	
	int n; cin >> n;
	unordered_map<int, int> mp;
	
	//this is taking approx timeComplexity of log(N)
	while(n>1){
		int prime_num = hp[n];
		while(n % prime_num == 0){
			mp[prime_num]++;
			n/=prime_num;
		}
	}
	for(auto it : mp){
		cout << it.first << "-->" << it.second << endl;
		
	}
	return 0;
	
}