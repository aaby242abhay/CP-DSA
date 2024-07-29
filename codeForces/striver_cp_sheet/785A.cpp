#include <bits/stdc++.h>

using namespace std;

int main(){
	int a; cin >> a;
	int ans = 0;
	while(a--){
		string s; cin >> s;
		if(s=="Tetrahedron"){
			ans+=4;
		}
		else if(s=="Cube"){
			ans+=6;
		}
		else if(s=="Octahedron"){
			ans+=8;
		}
		else if(s=="Dodecahedron"){
			ans+=12;
		}
		else ans+=20;
		// switch(s){
		// case "Tetrahedron": 
		// 	ans+=4;
		// 	break;

		// case "Cube":
		// 	ans+=6;
		// 	break;

		// case "Octahedron":
		// 	ans+=8;
		// 	break;

		// case "Dodecahedron":
		// 	ans+=12;
		// 	break;

		// case "Icosahedron":
		// 	ans+=20;
		// 	break;
		// }
	}
	cout << ans << endl;
	return 0;
}