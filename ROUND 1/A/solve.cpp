#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

#define FTB(i,a,b) for(LL i=a;i<=b;i++)
#define FT(i,a,b) for(LL i=a;i<b;i++)
#define FGB(i,a,b) for(LL i=a;i>=b;i--)
#define FG(i,a,b) for(LL i=a;i>b;i--)
#define endl "\n"
#define PB push_back
#define mp make_pair
#define fi first
#define se second
#define debug cout<<"VL\n";
#define PI 3.1415926535897
#define lbnd(dau,cuoi,giatri) lower_bound(dau,cuoi,giatri)
#define ubnd(dau,cuoi,giatri) upper_bound(dau,cuoi,giatri)
typedef double DB;
typedef long long LL;
typedef unsigned long long UL;
typedef long double LD;
typedef pair<LL, LL> II;
typedef vector<LL> VI;
typedef vector<bool> VB;


LL n, x, nho, to, res;


LL c(LL n, LL k) {
    LL res = 1;
    FTB(i, 1, k) {
        res *= n - i + 1;
        res /= i;
    }
    return res;
}


int main() {
  freopen("0.in", "r", stdin);
  freopen("0.out", "w", stdout);
    cin >> n;
    FTB(i, 1, n) {
        cin >> x;
        if (x == 1) nho++;
        else to++;
    }
    LL hvi[] = {30, 3, 1, 1};
    FTB(i, 0, 3) {
        if (i > to) continue;
        if (n - i < 6 - 2 * i) continue;
        res += hvi[i] * c(to, i) * c(n - i, 6 - 2 * i);
    }
    cout << res;




    return 0;
}
