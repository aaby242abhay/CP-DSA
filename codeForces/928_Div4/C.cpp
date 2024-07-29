
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
	int n, q; cin >> n >> q;
	vector<ll> c(n);
	rep(i,0,n) cin >> c[i];
	
	vector<int> cnt1(n);
	
	if(c[0]==1) cnt1[0] = 1;
	rep(i,1,n){
		if(c[i] == 1){
			cnt1[i] = cnt1[i-1]+1;
		}else{
			cnt1[i] = cnt1[i-1];
		}
	}
	
	vector<ll> pre(n);
	pre[0] = c[0] - 1;
	rep(i,1,n){
		if(c[i] == 1){
			pre[i] = pre[i-1];
		}else{
			pre[i] = pre[i-1] + c[i] - 1;
		}
	}
	debug(cnt1);
	debug(pre);
	while(q--){
		int l,r; cin >> l >> r;
		l--; r--;
		if(l==r){
			c1("No");
			continue;
		}
		int a = 0;
		if(l-1 >= 0) a = cnt1[l-1];
		int cnt = cnt1[r] - a;
		
		if(cnt == 0 ){
			c1("Yes");
			continue;
		}else{
			int a =0;
			if(l-1 >=0) a = pre[l-1];
			cnt -= pre[r] - a;
		}
		debug(cnt);
		if(cnt > 0){
			c1("No");
		}else{
			c1("Yes");
		}
		
	}
	
	
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int tt = 1;
	cin >> tt;
	while(tt--) solve();

}
