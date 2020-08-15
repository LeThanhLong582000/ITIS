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





int main() {
	srand(time(NULL));
	string file[10] = {
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
	};
  freopen(file[8].c_str(), "w", stdout);
  int n = 1000;
  cout << n << "\n";
  FTB(i, 1, n) {
    cout << rand() << " ";
  }



	return 0;
}
