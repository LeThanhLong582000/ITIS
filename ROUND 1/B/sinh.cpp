#include <bits/stdc++.h>

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define FORD(x, a, b) for (int x = a; x >= b; x--)
#define REP(x, a, b) for (int x = a; x < b; x++)
#define fi first
#define se second
#define ll long long
#define pb push_back
#define FU(i,a,b) for(int i = a;i <= b;i++)
#define FD(i,a,b) for(int i = a;i >= b;i--)
#define N 400007
using namespace std;

typedef pair < int , int > ii;

void sinhInput(int numberTest) {
	srand (time(NULL));
	for (int i = 7; i <= numberTest; i++) {
		char fileIn[20];
		sprintf(fileIn, "test/%d.in", i);
		fstream out(fileIn, ios::out);
		// BAt dau sinh input
		ll n, s;
		if (i < 14){
            n = (ll)rand() * (ll)rand() * (ll)rand() * (ll)rand() % 100;
            n = 2 * n + 1;
            s = (ll)rand() * (ll)rand() * (ll)rand() * (ll)rand() % 1000000000 + 1;
            out << n << " " << s << endl;
            for(int j = 1;j <= n;j++){
                int x = (ll)rand() * (ll)rand() * (ll)rand() * (ll)rand() % 1000000000 + 1;
                out << x << " ";
            }
		} else if (i == 14){
		    n = 200000 - 1;
		    s = 1;
		    out << n << " " << s << endl;
            for(int j = 1;j <= n;j++){
                int x = 1000000000;
                out << x << " ";
            }
		} else {
		    n = 200000 - 1;
		    s = 1000000000;
		    out << n << " " << s << endl;
            for(int j = 1;j <= n;j++){
                int x = 1;
                out << x << " ";
            }
		}
	}
}

void sinhOutput(int numberTest) {
	srand (time(NULL));
	for (int i = 1; i <= numberTest; i++) {
		char fileIn[20];
		char fileOut[20];
		sprintf(fileIn, "test/%d.in", i);
		sprintf(fileOut, "test/%d.out", i);
		fstream in(fileIn, ios::in);
		fstream out(fileOut, ios::out);
		// BAt dau sinh output
		int n,s;
        int a[N];
        in >> n >> s;
        FU(i,1,n) in >> a[i];
        sort(a + 1,a + n + 1);
        ll res = abs(a[n/2 + 1] - s);
        FU(i,1,n/2){
            if (a[i] > s) res += a[i] - s;
            if (a[n - i + 1] < s) res += s - a[n - i + 1];
        }
        out << res;
	}
}

int main() {
	int numberTest;
	cin >> numberTest;
	sinhInput(numberTest);
	sinhOutput(numberTest);
}
