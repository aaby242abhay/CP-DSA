#include<iostream>
#include<vector>

using namespace std;

int main(){
	string str;
	cin >> str;
	cout << "Hello " << str << endl;
	int n; cin >> n;
	vector<int> vec(n);
	for(int i=0; i<n; i++){
		cin >> vec[i];
	}
	for(auto i: vec){
		cout << i<<" ";
	}
	cout << endl;
}