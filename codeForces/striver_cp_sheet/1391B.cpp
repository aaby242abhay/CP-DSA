#include <bits/stdc++.h>
using namespace std;


void solve(){
	int n,m; cin >> n >> m;
	vector<vector<char>> mat(n, vector<char>(m));
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> mat[i][j];
		}
	}

	for(int i=n-1,j=0; j<m; j++){
		if(mat[i][j] == 'D') ans++;
	}
	for(int i=0,j=m-1; i<n; i++){
		if(mat[i][j] == 'R') ans++;
	}

	cout << ans << endl;
}
int main(int argc, char const *argv[])
{
	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}