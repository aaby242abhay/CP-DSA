
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
	int n; cin >> n;
	vector<ll> a(n);
	vector<ll> cnt(n);
	
	rep(i,0,n){
		int t; cin >> t;
		a[i] = t;
		cnt[t]++;
	}
	
	if(cnt[0] == 0){
		c1(n);
		int i = 1;
		while(i<=n){
			c2(i,i);
			i++;
		}
		return;
	}
	if(cnt[0] == 1) {
		c1(-1);
		return;
	}
	else{
		rep(i,0,n){
			if(cnt[i] == 0){
				vector<pair<int,int>> check(i,{INT_MAX,INT_MIN});
				for(int j=0; j<n; j++){
					if(a[j] < i){
						check[a[j]].ff = min(check[a[j]].ff, j);
					}
				}
				int maxi = INT_MIN;
				for(auto it: check){
					maxi = max(it.ff, maxi);
				}
				
				for(int j=n-1; j>=0; j--){
					if(a[j] < i){
						check[a[j]].ss = max(check[a[j]].ss, j);
					}
				}
				int mini = INT_MAX;
				for(auto it: check){
					mini = min(it.ss, mini);
				}
				
				if(maxi >= mini){
					c1(-1);
					debug(check);
					return;
				}else{
					debug(check);
					c1(2);
					c2(1, maxi+1);
					c2(maxi+2,n);
					return;
				}
			}
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
