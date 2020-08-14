#include<bits/stdc++.h>
#define FU(i,a,b) for(int i = a;i <= b;i++)
#define FD(i,a,b) for(int i = a;i >= b;i--)
#define ll long long
#define N 400007
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	int n,s;
	int a[N];
	cin >> n >> s;
	FU(i,1,n) cin >> a[i];
	sort(a + 1,a + n + 1);
	ll res = abs(a[n/2 + 1] - s);
	FU(i,1,n/2){
	    if (a[i] > s) res += a[i] - s;
	    if (a[n - i + 1] < s) res += s - a[n - i + 1];
	}
	cout << res;
	return 0;
}

