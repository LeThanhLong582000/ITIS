#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long a[55];
void xuli(){
	a[0]=1;
	a[1]=1;
	a[2]=2;
	a[3]=4;
	a[4]=8;
	for(int i=5;i<=50;i++){
		a[i]=2*a[i-1]-a[i-5];
		}
			
}
void sinhInput(int Begin,int numberTest) {
	srand (time(NULL));
	for (int i = Begin; i <= numberTest; i++) {
		char fileIn[20];
		sprintf(fileIn, "test/%d.in", i);
		fstream out(fileIn, ios::out);
		// Bat dau sinh input
		ll t = (ll)rand() * (ll)rand() * (ll)rand() % 10+1;
		out << t << endl;
		while(t--){
			ll num = (ll)rand() * (ll)rand() * (ll)rand() % 50+1;
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
		
		int t;
		in >> t;
		while(t--){
		int n;
		in >> n;
		out << a[n] << endl;
	}
	}
}
int main()
{	xuli();
    int numberTest,Begin;
	cin >>Begin>> numberTest;
//	sinhInput(Begin,numberTest);
	sinhOutput(Begin,numberTest);
    return 0;
}
