#include <bits/stdc++.h>

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define FORD(x, a, b) for (int x = a; x >= b; x--)
#define REP(x, a, b) for (int x = a; x < b; x++)
#define fi first
#define se second
#define ll long long
#define pb push_back
#define INF 0x3f3f3f3f
typedef unsigned long long ull;
using namespace std;


void sinhInput(int Begin,int numberTest) {
	srand (time(NULL));
	for (int i = Begin; i <= numberTest; i++) {
		char fileIn[20];
		sprintf(fileIn, "test/%d.in", i);
		fstream out(fileIn, ios::out);
		// Bat dau sinh input
		ll t = (ll)rand() * (ll)rand() * (ll)rand() % 1000+1;
		out << t << endl;
		for(int i=1;i<=t;i++)
			{	ll n = (ll)rand() * (ll)rand() * (ll)rand() % 1000+1;
				out << n << endl;
			
				for(int j=1;j<=n;j++)
					{
						ll x = (ll)rand() * (ll)rand() * (ll)rand() % 1000+1;
						out << x << " ";	
						}
			}
		}
	
		
	}

void sinhOutput(int Begin,int numberTest) {
	srand (time(NULL));
	for (int i = Begin; i <= numberTest; i++) {
		char fileIn[20];
		char fileOut[20];
		sprintf(fileIn, "test/%d.in", i);
		sprintf(fileOut, "test/%d.out", i);
		fstream in(fileIn, ios::in);
		fstream out(fileOut, ios::out);
		// Bat dau sinh output
		int t;
		in >> t;
		while(t--){
		int n;
		in >> n;
		int a[n+2];
		for(int i=1;i<=n;i++) in >> a[i];
		int le = 1;
		int chan = 1;
		for(int i=1;i<=n;i++)
			if(a[i]%2==0) {
				le=0;
				break;
			} 
		for(int i=1;i<=n;i++)
			if(a[i]%2!=0) {
				chan=0;
				break;
			}
		if(chan==1 || (le==1 && n%2==0)) out <<"NO";
		else out << "YES";
		out << endl;	 	
		}
	}
}

int main() {
	int numberTest,Begin;
	cin >> Begin >> numberTest;
	sinhInput(Begin,numberTest);
	sinhOutput(Begin,numberTest);
}
