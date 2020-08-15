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
    
}


void call(string ins) {
    system(ins.c_str());
}

main () {
    int N = 15;
    for (int i = 0; i < N; i++) {
        string input = "./solution < Test/" + to_string(i+1) + ".in > Test/" + to_string(i+1) + ".out";
        call(input);
    }
}
