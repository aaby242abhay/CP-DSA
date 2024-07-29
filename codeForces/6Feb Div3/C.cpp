
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rep(a,st, ed) for(ll a = st; a < (ed); ++a)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define c1(x) cout << x << endl
#define c2(x, y) cout << x << ' ' << y << endl
#define c3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define c0() cout << endl
#define cc(x) cout << x << " "

// typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	set<int> A, B;
	rep(i,0,n){
		int q;
		cin >> q;
		A.insert(q);
	}
	rep(i,0,m){
		int q;
		cin >> q;
		B.insert(q);
	}
	
	vector<int> a;
	vector<int> b;
	
	for(auto it: A){
		a.push_back(it);
	}
	for(auto it: B){
		b.push_back(it);
	}
		
	int common = 0;
	int cnt = 1;
	int cntA = 0;
	int cntB = 0;
	int i=0, j=0;
	
	debug(a);
	debug(b);
	while(cnt <= k){
		debug(cnt);
		if(i<a.size() && j<b.size() && a[i]==cnt && b[j]==cnt){
			cnt++;
			i++;
			j++;
			common++;
		}
		else if(i<a.size() && a[i]==cnt){
			cntA++;
			cnt++;
			i++;
		}
		else if(j<b.size() && b[j]==cnt){
			cntB++;
			cnt++;
			j++;
		}
		else{
			cout << "No" << endl;
			return;
		}
	}
	
	debug(i);
	debug(j);
	debug(cntA);
	debug(cntB);
	debug(common);
	
	if(cntA<=k/2 && cntB<=k/2 && cnt==(k+1) && (cntA + cntB + common == k)){
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;
	
	
	
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int tt = 1;
	cin >> tt;
	while(tt--) solve();

}
