#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void sinhInput(int Begin,int numberTest) {
	srand (time(NULL));
	for (int i = Begin; i <= numberTest; i++) {
		char fileIn[20];
		sprintf(fileIn, "test/%d.in", i);
		fstream out(fileIn, ios::out);
		// Bat dau sinh input
		ll t = (ll)rand() * (ll)rand() * (ll)rand() % 100+1;
		out << t << endl;
		while(t--){
			ll n, m;
			n = (ll)rand() * (ll)rand() * (ll)rand() % 10000+1;
			m = (ll)rand() * (ll)rand() * (ll)rand() % 10000+1;
			if(n == 0) n++;
			if(m == 0) m++;
			if(n < 0) n *= -1;
			if(m < 0) m *= -1;
			out << n << " " << m << endl;
		}
	}
}
void sinhOutput(int Begin,int numberTest) {
	srand (time(NULL));
	for (int i = Begin; i <= numberTest; i++){
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
      	  	long long  n, m;
       	 	in >> n >> m;
       	 	long long ans = 1LL*(n * m - 1) * n * m;
        	if(n >= 1 && m >= 2)
            	ans -= (1LL* 4 * (n - 1) * (m - 2));
        	if(n >= 2 && m >=1 )
            	ans -= (1LL* 4 * (n - 2) * (m - 1));
        	out << ans << endl;
    }
	}
}
int main()
{
    int numberTest,Begin;
	cin >>Begin>> numberTest;
	sinhInput(Begin,numberTest);
	sinhOutput(Begin,numberTest);
    return 0;
}
