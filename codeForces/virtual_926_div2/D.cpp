
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
	
	vector<stack<string>> v(4);
	stack<string> stC, stD, stH, stS;
	
	int tr;
	char c; cin >> c;
	if(c=='C') tr = 0;
	if(c=='D') tr = 1;
	if(c=='H') tr = 2;
	if(c=='S') tr = 3;
	
	rep(i,0,2*n){
		string s; cin >> s;
		if(s[1] == 'C') stC.push(s);
		else if(s[1] == 'D') stD.push(s);
		else if(s[1] == 'H') stH.push(s);
		else stS.push(s);
	}
	
	v[0] = stC;
	v[1] = stD;
	v[2] = stH;
	v[3] = stS;
	
	int rem = 0;

	for(int i=0; i<4; i++){
		if(i!=tr){
			rem += (v[i].size()) %2;
		}
	}
	
	if(v[tr].size() <rem){
		c1("IMPOSSIBLE");
		return;
	}
	
	for(int i=0; i<4; i++){
		if(i!=tr){
			auto st = v[i];
			if((st.size())%2 == 1){
				string s1 = st.top();
				st.pop();
				string t = v[tr].top();
				v[tr].pop();
				cout << s1 << " " << t<< endl;
			}
			while(!st.empty()){
				string a = st.top();
				st.pop();
				string b = st.top();
				st.pop();
				
				if(a[0] < b[0]) swap(a[0],b[0]);
				cout << b << " " << a <<endl;
			}
		}
	}
	
	while(!v[tr].empty()){
		string a = v[tr].top();
		v[tr].pop();
		string b = v[tr].top();
		v[tr].pop();
		if(a[0] < b[0]) swap(a[0],b[0]);
		cout << b << " " << a << endl;
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
