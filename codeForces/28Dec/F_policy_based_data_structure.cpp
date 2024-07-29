#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <iostream>
typedef long long ll;

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    pbds; // find_by_order, order_of_key

void solve() {
  int n;
  cin >> n;
  vector<pair<ll, ll>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());

  ll ans = 0;
  pbds st;

  for (int i = 0; i < n; i++) {
    st.insert(v[i].second);
  }
  for (int i = 0; i < n; i++) {
    ans += st.order_of_key(v[i].second);
    st.erase(v[i].second);
  }

  cout << ans << endl;

  return;
}
int main() {
  int tt;
  cin >> tt;
  while (tt--)
    solve();
}

/*
-2 100
1  8
2  6
3  9
4  5
7 10
*/