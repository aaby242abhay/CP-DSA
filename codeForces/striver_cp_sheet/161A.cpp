#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[5][5];
	int c,b;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			 cin >> a[i][j];
			 if(a[i][j]){
			 	c = i;
			 	b = j;
			 }

		}
	}

	cout << abs(2-c) + abs(2-b) <<endl;
	return 0;


}