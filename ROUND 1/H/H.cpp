#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long i64;
i64 a , b;
void input(){
	cin >> a >> b; 
}
bool isStick(i64 x , i64 y){
    i64 val = 1e12;
    while ( 1){
        //cout << x << ' ' << y << ' ' <<  val << endl;
        if ( x == y ) return true;
        int tmp = y % 3; y += (3 - tmp)%3;
        //cout << tmp << ' ' << y << endl;
        y = y*2/3;
        if ( y == val ) return false;
        val = y;
        if ( x > y) return true;
    }
}
void solve(){
    if ( a >= b ){
         cout << "YES" << endl;
         return;
    }
    if ( isStick(a,b) == true){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
int main(){
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	faster() ; int t = 1;
	cin >> t; cin.ignore();
	while(t--){input() ; solve();}
	cerr << "Running is : " << 1.0*clock()/1000 << "seconds" << endl;
	return 0;
}