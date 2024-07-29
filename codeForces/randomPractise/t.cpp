
#include<bits/stdc++.h>

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

struct manacher{

    vector<int> p;
    void build (string s){
        string t;
        for(auto it : s) t += string("#") + it;
        run_manacher(t+'#');
    }
    void run_manacher(string s){
        int n = s.length();
        p.assign(n, 1);
        int l=1, r=1;
        for(int i=1; i<n; i++){
            p[i] = max(0, min(r-i, p[r+l-i]));
            while( i+p[i] < n && i-p[i]>=0 && s[i-p[i]] == s[i+p[i]]){
                p[i]++;
            }
            if(i+p[i] > r) {      
                r = i + p[i];
                l = i - p[i];
            }
        }
        for(auto it : p) cout << it << " ";
    }
    // int preSuffPalindrome(string s){
    // 	int n = 2*s.size() + 1;
    	
    // 	vector<int> v = p;
    // 	for(int i=0; i<n; i++){
    // 		p[i] 
    // 	}
    // }
    
    
    int getLongest(int cen, bool odd){
        int pos = 2*cen + 1 + (!odd);
        return p[pos] - 1;
    }

    bool checkPalin(int l, int r){
        if( (r-l+1) <= getLongest((r+l)/2, l%2 == r%2)){
            return true;
        }else{
            return false;
        }
    }
}m;

void solve(){
	string s; cin >> s;
	m.build(s);	
	
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int tt = 1;
	cin >> tt;
	while(tt--) solve();

}
