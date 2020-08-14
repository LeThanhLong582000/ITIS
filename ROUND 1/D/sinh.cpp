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
		ll t = (ll)rand() * (ll)rand() * (ll)rand() % 1000+1;
		out << t << endl;
		while(t--){
			ll num = (ll)rand() * (ll)rand() * (ll)rand() % 100000+1;
			out << num << endl;
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
		ll t, n;
		in >> t;
		while(t--){
			in >> n;
			int Digit_8 = n/4;
			if (n%4!=0) Digit_8++;
			for(int j=1;j<=n-Digit_8;j++)
				out << "9";
			for(int j=1;j<=Digit_8;j++)
				out << "8";
			out << endl;
		}
	}
}
int main()
{
    int numberTest,Begin;
	cin >>Begin>> numberTest;
	//sinhInput(Begin,numberTest);
	sinhOutput(Begin,numberTest);
    return 0;
}
