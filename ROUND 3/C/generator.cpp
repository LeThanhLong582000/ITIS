#include <bits/stdc++.h>
#define fi first
#define se second

using namespace std;

typedef pair<long long, long long> pt;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

long long Create(long long l, long long r) { 
    return rng() % (r - l + 1) + l;
}

void createString(ofstream & fout) {
    int len = Create(1, 20);
    for (int i = 0; i < len; i++) {
        fout << (char)(Create('a', 'z'));
    }
    fout << endl;
}


void createTest(int v, ofstream & fout) {
    int n = Create(1, v);
    int k = Create(1000, 1000000000);
    fout << n << " " << k << endl;
    for (int i = 0; i < n; i++) {
        createString(fout);
    }
}

main () {
    int N = 15;
    for (int i = 0; i < N; i++) {
        string input = "Test/" + to_string(i+1) + ".in";
        ofstream fout(input.c_str());
        if (i < 5) createTest(10, fout);
        else if (i < 10) createTest(1000, fout);
        else createTest(5000, fout);
        fout.close();
        cout << "Created test:" << i+1 << endl;
    }
}
