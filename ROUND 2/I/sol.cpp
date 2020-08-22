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
int main(){
   
    int n;
    cin>>n;
    vector<long long>pos;
    pos.resize(n);
    
    for(auto &z:pos)cin>>z;
    
    long long l,r;

    cin>>l>>r;

    if(n==1){
        cout<<(r/pos[0]-(l-1)/pos[0]);
        return 0;
    }
    if(n==2){
        long long z=((pos[0])/__gcd(pos[0],pos[1]))*pos[1];
        cout<<(r/pos[0]-(l-1)/pos[0])+ (r/pos[1]-(l-1)/pos[1]) - (r/z-(l-1)/z);
        return 0;
    }
    if(n==3){

        long long z_1=((pos[0])/__gcd(pos[0],pos[1]))*pos[1];

        long long z_2=((pos[0])/__gcd(pos[0],pos[2]))*pos[2];

        long long z_3=((pos[1])/__gcd(pos[2],pos[1]))*pos[2];

        long long z_all=lcm(lcm(pos[0],pos[1]),pos[2]);
        
        long long ans_1=(r/pos[0]-(l-1)/pos[0])+(r/pos[1]-(l-1)/pos[1])+(r/pos[2]-(l-1)/pos[2]);

        long long ans_2= (r/z_1-(l-1)/z_1) + (r/z_2-(l-1)/z_2) + (r/z_3-(l-1)/z_3);

        long long ans_3=(r/z_all-(l-1)/z_all);

        cout<<ans_1-ans_2+ans_3<<endl;
        return 0;


    }

    



}