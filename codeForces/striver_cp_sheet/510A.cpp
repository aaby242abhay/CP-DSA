#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m; cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i%2==0){
				cout<< "#";
			}
			else{
				if( (j==0 && i%4==3) || (j==m-1 && i%4==1) ){
					cout<<"#";
				}
				else{
					cout<<".";
				}
			}

		}
		cout<<endl;
	}
	cout<<endl;
}