#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool p[1000002];
long long a[1002];
void sang(){
	memset(p,true,sizeof(p));
	p[1]=false;
	for(int i=2;i<=10000;i++)
		if(p[i]){
		//	cout << i << endl;
			for(long long j=i*i;j<=10000;j+=i)
				p[j]=false;
			}
			
	a[1] = 2;
	int i = 2;
	int x = 3;
	while(i<=1000){
		if(p[x]) {
			a[i] = x;
			i++;
		}
		x+=2;
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
			ll num = (ll)rand() * (ll)rand() * (ll)rand() % 1000+1;
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
{	sang();
    int numberTest,Begin;
	cin >>Begin>> numberTest;
	sinhInput(Begin,numberTest);
	sinhOutput(Begin,numberTest);
    return 0;
}
