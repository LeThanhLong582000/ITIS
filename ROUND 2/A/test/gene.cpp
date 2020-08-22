#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll Rand(ll l, ll h)
{
  return l + ((long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
              (long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
              (long long)rand() * (RAND_MAX + 1) +
              rand()) % (h - l + 1);
}

int n, m, numdoc, deg[100005], dem;
tuple<ll, ll, ll> q[112345];

int main() {
  srand(time(NULL));
  string file[13] = {
    "0.in",
    "1.in",
    "2.in",
    "3.in",
    "4.in",
    "5.in",
    "6.in",
    "7.in",
    "8.in",
    "9.in",
    "10.in",
    "11.in",
    "12.in"
  };
  freopen(file[11].c_str(), "w", stdout);
  n = Rand(1, 1e4);
  m = Rand(1, 1e5);
  for (int i = 1; i <= m; i++) {
    int t = Rand(1, 3);
    int a, b;
    if (t == 1) {
      a = Rand(1, n), b = Rand(1, n);
      if (deg[a]) continue;
      deg[a]++;
    }
    else if (t == 2) {
      a = Rand(1, n);
      b = -1;
      numdoc++;
    }
    else {
      a = Rand(1, n);
      b = Rand(1, numdoc);
    }
    q[++dem] = {t, a, b};
  }

  cout << n << " " << dem << "\n";
  for (int i = 1; i <= dem; i++) {
    if (get<0>(q[i]) != 2) cout << get<0>(q[i]) << " " << get<1>(q[i]) << " " << get<2>(q[i]) << "\n";
    else cout << get<0>(q[i]) << " " << get<1>(q[i]) << "\n";
  }



  return 0;
}
