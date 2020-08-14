#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int n;
long long F[105];
void Fibo() {
    F[0] = 0;
    F[1] = 1;
    F[2] = 1;
    for (int i = 3; i <= 100;i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}
void Input(){
    cin >> n;
}

void Solve(){
    cout << F[n] << endl;
}
int main(){
    int T = 1;
    Fibo();
    // cin >> T;
    while(T--){
        Input();
        Solve();
    }
    return 0;
}