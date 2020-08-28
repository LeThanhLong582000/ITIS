#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
#define se second
#define fi first

const int maxn = 2e5 + 100;

ll n, a[maxn], pre[maxn], pres[maxn], res;


// convex_hull_trick_min
struct convex_hull_trick {
  ll top = 0;
  ii z[maxn];
  bool del(ll i, ll j, ll k) {
    return 1.*(z[j].fi - z[i].fi) * (z[k].se - z[i].se) >= 1.*(z[k].fi - z[i].fi) * (z[j].se - z[i].se);
  }
  void add(ll a, ll b) {
    z[++top] = {a, b};
    while (top >= 3 && del(top - 2, top - 1, top)) {
      z[top - 1] = z[top];
      top--;
    }
  }
  ll query(ll x) {
    ll ans, l = 1, r = top;
    while (l < r) {
      ll mid = (l + r) / 2;
      ll p1 = z[mid].fi * x + z[mid].se;
      ll p2 = z[mid + 1].fi * x + z[mid + 1].se;
      if (p1 > p2) {
        l = mid + 1;
      }
      else {
        r = mid;
      }
    }
    return z[l].fi * x + z[l].se;
  }
} cht;


void Solve() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  for (int i = 1; i <= n; i++) {
    pre[i] = a[i] + pre[i - 1];
    pres[i] = a[i] * i + pres[i - 1];
  }
  res = max(res, pre[1]);
  cht.add(-1, 0);

  for (int i = 2; i <= n; i++) {
    res = max(res, pres[i]);
    res = max(res, pres[i] - cht.query(-pre[i]));
    // cout << i << " " << pres[i] - cht.query(-pre[i]) << "\n";
    cht.add(-i, pres[i] - pre[i] * i);
  }
  cout << res;
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  freopen("0.in", "r", stdin);
  freopen("0.out", "w", stdout);

  int T = 1;
  // cin >> T;

  while (T--) Solve();

}
