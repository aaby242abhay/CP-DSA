
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

// const ll N = 1e9;
// vector<bool> isPrime(N,1);			//making a vector<bool> of size N and making everyone false
// vector<int> lp(N,0), hp(N,1);

	

void solve(){
	ll a,b;
	cin >> a >> b;
	
	// isPrime[1] = 1;
	// if(isPrime[a] && isPrime[b]) c1("No");
	// else c1("Yes");
	
	if(a%2==1 && b%2==1){
		c1("No");
		return;
	}
	
	if(a%2==1){
		ll c = b/2;
		if(c == a) c1("No");
		else c1("Yes");
		return;
	}

	if(b%2==1){
		ll c = a/2;
		if(c==b) c1("No");
		else c1("Yes");
		return;
	}
	
	c1("Yes");
	return;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int tt = 1;
	cin >> tt;
	
	// isPrime[0] = isPrime[1] = false;
	// for(int i=2; i<N; i++){
	// 	if(isPrime[i]){
	// 		for(int j=2*i; j<N; j+=i){
	// 			isPrime[j] = false;
	// 		}
			
	// 	}
	// }
	
	while(tt--) solve();

}
