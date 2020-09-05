#include <bits/stdc++.h>

//#define MULTI_TEST "HyNnl"
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;

using namespace std;

typedef pair<long long, long long> pt;
typedef vector<int> vi;

const int N = 1005;
const long long base = 1e9+7;
const long long inf = 1e18+7;
clock_t t1,t2;
long long n, m, k;
long long h[N], w[N], lg2[N], S[N];
long long ST[N][30];

void Preprocess() {
    
}

long long sum(int i, int j) {
    return (S[j+1] - S[i]) % base;
}

long long rmq(int i, int j) {
    int k = lg2[j - i + 1];
    return min(ST[i][k], ST[j - (1 << k) + 1][k]);
}

long long C2n(long long n) {
    return n*(n-1)/2 % base;
}

long long Try(int i, int j) {
    long long h = rmq(i, j);
    long long s = sum(i, j);
    if (i == j) return (C2n(h)+h) % base *(C2n(s)+s) % base;
    return (C2n(h)+h)*w[i] % base*w[j] % base;
}

void Input () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
}

void Solve () {
    // ST
    for (int i = 0; i < n; i++) {
        ST[i][0] = h[i];
    }
    for (int j = 1; j < 30; j++) {
        for (int i = 0; i + (1 << j) - 1 < n; i++) {
            ST[i][j] = min(ST[i][j-1], ST[i + (1 << (j - 1))][j-1]);
//             if (j < 3) cout << i << " " << j << " " << ST[i][j] << endl;
        }
    }
    
    for (int i = 0; i < n; i++) {
        S[i + 1]  = S[i] + w[i];
    }
    
    for (int i = 2; i < N; i++) lg2[i] = lg2[i >> 1] + 1;
    
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            ans += Try(i, j);
            ans %= base;
        }
    }
    cout << ans << endl;
}

main () {
    cerr << "Program is running" << endl;
    t1 = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Preprocess();
    #ifdef MULTI_TEST
    int t; cin >> t;
    while (t--) {
        Input();
        Solve();
    }
    #else
    Input();
    Solve();
    #endif
    t2 = clock();
    float diff ((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;
    cerr << "\nRunning in " << seconds << " seconds" << endl;
}
