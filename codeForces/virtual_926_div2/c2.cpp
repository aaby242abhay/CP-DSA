
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

int M=998244353;
 
ll powm(ll x,ll n){
    x%=M;
    if(n==0)return 1; else if(n==1)return x;
    ll p= powm(x*x,n/2);
    if(n%2) return p*x%M; else return p;
}

void solve(){
	int n; cin >> n;
	
	vector<ll>a(n);
	rep(i,0,n) cin >> a[i];
	
	vector<ll>pr(n);
	pr[0] = a[0];
	rep(i,1,n) pr[i] = a[i] + pr[i-1];
	
	vector<ll>cnt(n,0);
	cnt[0] = (pr[0]<0);
	rep(i,1,n) cnt[i] = (pr[i]<0) + cnt[i-1];
	
	ll mn = *min_element(all(pr));
	if(mn>=0){
        int ans = powm(2,n);
        cout<<ans<<'\n';
        return;
    }
	ll ans = 0;
	debug(pr);
	debug(mn);
	rep(i,0,n){
		if(pr[i] != mn) continue;
		
		int c = (n-cnt[i]);
		debug(c);
		ans=(ans+powm(2,c))%M;
	}
	c1(ans%M);
	
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int tt = 1;
	cin >> tt;
	while(tt--) solve();

}
