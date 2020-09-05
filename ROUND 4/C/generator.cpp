#include <bits/stdc++.h>
#define fi first
#define se second

using namespace std;

typedef pair<long long, long long> pt;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

long long Create(long long l, long long r) { 
    return rng() % (r - l + 1) + l;
}

void createTest(int v, int x, ofstream & fout) {
    int n = Create(1, v);
    fout << n << endl;
    for (int i = 0; i < n; i++) {
        fout << Create(1, x) << " ";
    }
    fout << endl;
    for (int i = 0; i < n; i++) {
        fout << Create(1, x) << " ";
    }
    fout << endl;
}

main () {
    int N = 15;
    for (int i = 0; i < N; i++) {
        string input = "Test/" + to_string(i+1) + ".in";
        ofstream fout(input.c_str());
        if (i < 5) createTest(10, 20, fout);
        else if (i < 10) createTest(100, 10000, fout);
        else createTest(1000, 1000000000, fout);
        fout.close();
        cout << "Created test:" << i+1 << endl;
    }
}
