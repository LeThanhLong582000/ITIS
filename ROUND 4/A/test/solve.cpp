#include<bits/stdc++.h>

using namespace std;
#define FTB(i,a,b) for(LL i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(LL i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(LL i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(LL i=a,_b=b;i>_b;i--)
#define endl "\n"
#define debug cout<<"debug\n"
#define PB push_back
#define mp make_pair
#define fi first
#define se second
#define PI 3.1415926535897
#define lbnd(f,s,gt) lower_bound(f,s,gt)
#define ubnd(f,s,gt) upper_bound(f,s,gt)
#define y1 aghksdmlsjdfjavljvlckdfmg
#define lamtron(n) fixed<<setprecision(n)
#define ALL(s) s.begin(),s.end()
#define ONLINE_JUDGE gshysrthrrthbd

template<class T> int getbit(T s, int i) { return (s >> i) & 1; }
template<class T> T onbit(T s, int i) { return s | (T(1) << i); }
template<class T> T offbit(T s, int i) { return s & (~(T(1) << i)); }
template<class T> int cntbit(T s) { return __builtin_popcount(s);}
template<class T> inline T gcd(T a, T b){ T r; while (b != 0) { r = a % b; a = b; b = r; } return a;}

typedef double DB;
typedef long long LL;
typedef unsigned long long UL;
typedef long double LD;
typedef pair<LL,LL> II;
typedef vector<LL> VI;
typedef vector<II> VII;
typedef vector<bool> VB;


LL n,a,b,c,l=0,r=1e18,res;

bool ok(LL x){
    if(x==0) return true;
    if(x-1<=(n-b)/(b-c)) return true;
    return false;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    freopen("20.in","r",stdin);
    freopen("20.out","w",stdout);
    cin>>n>>a>>b>>c;
    if(a<=b-c){
        cout<<n/a;
        return 0;
    }
    if(n<b){
        cout<<n/a;
        return 0;
    }
    LL mid=(n-b)/(b-c)+1;
    res=mid+(n-mid*(b-c))/a;
    cout<<res;
	return 0;
}
