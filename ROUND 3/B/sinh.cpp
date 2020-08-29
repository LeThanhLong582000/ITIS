#include <bits/stdc++.h>

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define FORD(x, a, b) for (int x = a; x >= b; x--)
#define REP(x, a, b) for (int x = a; x < b; x++)
#define fi first
#define se second
#define ll long long
#define pb push_back


using namespace std;
const long long Max = 1e18;

long long nt[10000007];

void sangNT(){
	long long tmp = sqrt(10000007);
	for (long long i=2; i<= tmp; i++){
		if (nt[i]==0){
			for (long long j=i*i; j<10000007; j+=i){
				nt[j]=i;
			}
		}
	}
}

void sinhInput(int numberTest) {
	srand (time(NULL));
	for (int i = 24; i <= numberTest; i++) {
		char fileIn[200];
		sprintf(fileIn, "test/%d.in", i);
		fstream out(fileIn, ios::out);
		int minN = 1;
		int maxN = 100000;
		// BAt dau sinh input
//		long long n = (ll)rand() * (ll)rand() * (ll)rand() * (ll)rand() % (maxN + 1 - minN) + minN;
		long long n = 1000000;
		out<<n<<endl;
		for (int i=0; i<n; i++){
			long long a = (ll)rand() * (ll)rand() * (ll)rand() * (ll)rand() % (maxN + 1 - minN) + minN;
			out<<a<<endl;
		}
//		long long a = (ll)rand() * (ll)rand() * (ll)rand() * (ll)rand() % Max;
//		long long b = (ll)rand() * (ll)rand() * (ll)rand() * (ll)rand() % Max;
//		out<<a<<" "<<b;
	}
}

void sinhOutput(int numberTest) {
	srand (time(NULL));
	for (int i = 1; i <= numberTest; i++) {
		char fileIn[200];
		char fileOut[200];
		sprintf(fileIn, "test/%d.in", i);
		sprintf(fileOut, "test/%d.ans", i);
		fstream in(fileIn, ios::in);
		fstream out(fileOut, ios::out);
		// BAt dau sinh output
		long long n;
		in>>n;
		sangNT();
		long long tong=0;
		for (long long i=0; i<n; i++){
			long long a;
			in>>a;
			if (a<2) continue;
			while (1){
				if (nt[a]==0){
					tong+=a;
					break;
				}
				else {
					tong+=nt[a];
					a/=nt[a];
				}
			}
		}
		out<<tong;
	}
}

int main() {
	int numberTest;
	cin >> numberTest;
//	sinhInput(numberTest);
	sinhOutput(numberTest);
}
