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
  freopen(file[12].c_str(), "w", stdout);

  int n = Rand(2e5 - 1, 2e5);
  cout << n << "\n";
  for (int i = 1; i <= n; i++) {
    if (rand() % 2 == 0) cout << "-";
    cout << Rand(0, 1e6) << " ";
  }


  return 0;
}
