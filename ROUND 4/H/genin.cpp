#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
 
typedef pair<int , int> pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
long long Create(long long l, long long r) { 
    return rng() % (r - l + 1) + l;
}
//sinh test nho

void createTest(ofstream & fout) {
    int n = Create(5,10);
    int c = Create(10,100);
    int d = Create(10,100);
    fout << n << ' ' << c << ' ' << d << '\n';
    for(int i = 0 ; i < n; i++){
        int b,p,t;
        b = Create(10,100);
        c = Create(10,100);
        t = Create(0,1);
        fout << b << ' ' << c << ' ' << ((t==0)?"C":"D") << '\n';
    }
}
//sinh test vua
void createTest2(ofstream & fout) {
    int n = Create(1000,10000);
    int c = Create(1000,10000);
    int d = Create(1000,10000);
    fout << n << ' ' << c << ' ' << d << '\n';
    for(int i = 0 ; i < n; i++){
        int b,p,t;
        b = Create(1000,10000);
        c = Create(1000,10000);
        t = Create(0,1);
        fout << b << ' ' << c << ' ' << ((t==0)?"C":"D") << '\n';
    }
}


//sinh test lon
void createTest3(ofstream & fout) {
    int n = 100000;
    int c = Create(50000,100000);
    int d = Create(50000,100000);
    fout << n << ' ' << c << ' ' << d << '\n';
    for(int i = 0 ; i < n; i++){
        int b,p,t;
        b = Create(50000,100000);
        c = Create(50000,100000);
        t = Create(0,1);
        fout << b << ' ' << c << ' ' << ((t==0)?"C":"D") << '\n';
    }
}



int main () {
	srand(time(NULL));
    for(int i = 1 ; i <= 15 ; i++){
        string s;
        ostringstream convert;
        convert << i;
        s=convert.str();
        string input = "test/"+ s + ".in";
        ofstream fout(input.c_str());
        if (1 <= i && i <= 5 ) createTest(fout);
        else if ( 6 <= i && i <= 10) createTest2(fout);
        else createTest3(fout);
        fout.close();
        cout << "Created test:" << i << endl;
    }
    return 0;
}
