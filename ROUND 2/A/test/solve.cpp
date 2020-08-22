#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, m, par[112345], depth[112345], count_doc, res[112345];
ll in[112345], out[112345], flat_tree, deg[112345];
vector<pair<ll, ll>> process[112345];
vector<ll> ke[112345];
tuple<ll, ll, ll> q[112345];


ll Find(ll u) {
  if (u != par[u]) par[u] = Find(par[u]);
  return par[u];
}

bool Merge(ll u, ll v) {
  u = Find(u);
  v = Find(v);
  if (u == v) return false;
  if (depth[u] == depth[v]) depth[u]++;
  if (depth[u] < depth[v]) par[u] = v;
  else par[v] = u;
  return true;
}

void dfs(ll u) {
  in[u] = ++flat_tree;
  for (ll v : ke[u]) {
    dfs(v);
  }
  out[u] = ++flat_tree;
}


void Solve() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) par[i] = i;

  for (int i = 1; i <= m; i++) {
    int t, x, y;
    cin >> t;
    if (t == 1) {
      cin >> x >> y;
      q[i] = {1, x, y};
      ke[y].push_back(x);
      deg[x]++;
    }
    else if (t == 2) {
      cin >> x;
      q[i] = {2, x, -1};
    }
    else {
      cin >> x >> y;
      q[i] = {3, x, y};
      process[y].push_back({i, x});
    }
  }
  for (int i = 1; i <= n; i++) {
    if (deg[i]) continue;
    dfs(i);
  }
  // for (int i = 1; i <= n; i++) cout << in[i] << " " << out[i] << "\n";
  for (int i = 1; i <= m; i++) {
    int t, x, y;
    t = get<0>(q[i]);
    x = get<1>(q[i]);
    y = get<2>(q[i]);
    if (t == 1) Merge(x, y);
    else if (t == 2) {
      ++count_doc;
      for (pair<ll, ll> it : process[count_doc]) {
        ll id = it.first, u = it.second;
        if ((Find(x) == Find(u) && in[u] < in[x] && out[x] < out[u]) || x == u) res[id] = 1;
        else res[id] = -1;
        // cout << x << " " << u << " " << tmp << "\n";
        // cout << i << " " << id << " " << res[id] << endl;
      }
    }
  }
  for (int i = 1; i <= m; i++) {
    if (res[i] == 1) cout << "YES\n";
    else if (res[i] == -1) cout << "NO\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  freopen("12.in", "r", stdin);
  freopen("12.out", "w", stdout);

  int T = 1;
  // cin >> T;

  while (T--) Solve();

}
