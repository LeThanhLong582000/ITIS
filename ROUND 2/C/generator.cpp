#include <bits/stdc++.h>
#define fi first
#define se second

using namespace std;

typedef pair<long long, long long> pt;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

long long Create(long long l, long long r) { 
    return rng() % (r - l + 1) + l;
}


void createTest(int v, ofstream & fout) {
    fout << Create(2, v) << endl;
}

main () {
    int N = 15;
    for (int i = 0; i < N; i++) {
        string input = "Test/" + to_string(i+1) + ".in";
        ofstream fout(input.c_str());
        if (i < 5) createTest(1000, fout);
        else if (i < 10) createTest(1000000, fout);
        else createTest(1000000000, fout);
        fout.close();
        cout << "Created test:" << i+1 << endl;
    }
}
