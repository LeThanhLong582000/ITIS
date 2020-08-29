#include<bits/stdc++.h>
using namespace std;
vector<int> Graph[100005];
vector<int>vis;
void dfs(int u){
    // cout<<u<<endl;
    vis[u]=1;
    for(auto z:Graph[u]){
        if(vis[z]==0)dfs(z);
    }
}
long long lcm(long long x,long long y){
    return (x/__gcd(x,y))*y;
}
long long get(const long long & l,const long long & r,const long long & x){
    return r/x - (l-1)/x;
}
int main(){
   
    int n;
    cin>>n;
    vector<long long>pos;
    pos.resize(n);
    
    for(auto &z:pos)cin>>z;
    long long l,r;
    cin>>l>>r;
    long long ans = 0;
    long long maxN = (1LL<<n);
    for(int i=1;i<maxN;i++){
        long long ans_tmp = 0;
        int cnt = 0;
        for(int j=0;j<n;j++){
            if((1LL<<j)&i){
                cnt+=1;
                if(ans_tmp==0)ans_tmp = pos[j];
                else ans_tmp = lcm(ans_tmp,pos[j]);
            }
        }
        if(cnt%2==0)ans = ans - get(l,r,ans_tmp);
        else ans = ans + get(l,r,ans_tmp);
    }
    cout<<ans<<endl;

    



}