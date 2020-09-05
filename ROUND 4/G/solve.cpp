#include <bits/stdc++.h>
using namespace std;
//===============Khai bao bien================//
 
//============================================//
//===============Khoi tao ham=================//
void Solve();
//============================================//
//====================Main====================//
int main()
{
    int T;
    cin >>T;
    while(T--)
    {
        Solve();
    }
    return 0;
}
//============================================//
//==============Thiet lap ham=================//
void Solve(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i=0;i<n;i++) cin >>a[i];
    sort(a,a+n);
    int cnt=0,ans=0,cur=100000000;
    for(int i=n-1;i>=0;i--){
        cnt++;
        cur=min(cur,a[i]);
        ans=max(ans,min(cnt,cur));
    }
    cout << ans<<endl;
}
//============================================// 
