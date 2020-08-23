#include <bits/stdc++.h>

// #define MULTI_TEST "HyNnl"
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;
#define int long long

using namespace std;

typedef pair<long long, long long> pt;
typedef vector<int> vi;

const int N = 300005;
const long long base = 1e9+7;
const long long inf = 1e18+7;
clock_t t1,t2;
long long n, m, k;
long long a[N];

void Preprocess() {
    
}

int Try(long long n, int v[]) {
    int res = 1000; 
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        int tmp[40];
        if (n % i) continue;
        int res1 = Try(n/i-1, tmp);
        if (res1 > res) {
            res = res1;
            tmp[res] = i;
            for (int i = 0; i <= res; i++) v[i] = tmp[i];
        }
    }
    if (res == 0) v[0] = n;
    return res + 1;
}

void Input () {
    cin >> n;
}

void Solve () {
    int v[40];
    cout << (k = Try(n, v)) << endl;
    for (int i = k - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;
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


// code đã sửa để up lên auto sai =))
