#include<bits/stdc++.h>
#define ll long long
#define for(i,a,b) for(long long i = a; i < b; i++)
#define ld long double
using namespace std;

ll n, k;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll creat(ll a ,ll b)						
{											
	return (ll)rng() % (b - a + 1) + a;					// Create random number in [a, b]
}

void sinhInput(int numberTest) 
{
	for (i, 1, 6) 
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		n = creat(1, 1e3); 
		out << n << " ";
		k = creat(1,3); out << k;
    	out.close();
	}
	for (i,5,11) 
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		n = creat(1e3, 1e6); 
		out << n << " ";
		k = creat(4,6);
		out << k;
    	out.close();
	}
	for (i,11,15)
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		n = creat(1e6, 1e9); 
		out << n << " ";
		k = 8; out << k;
    	out.close();
	}
	char fileIn[20];
	sprintf(fileIn, "%d.in", 15);
	fstream out(fileIn, ios::out);
	n = 1e9; 
	out << n << " ";
	k = 8; out << k;
    out.close();
}

void sinhOutput(int numberTest) 
{
	for (j, 1, numberTest+1) 
	{
		char fileIn[20];
		char fileOut[20];
		sprintf(fileIn,"%d.in", j);
		sprintf(fileOut, "%d.out", j);
		fstream in(fileIn, ios::in);
		fstream out(fileOut, ios::out);
		// bat dau sinh output
		in >> n >> k;
		long long ans = 1;
		for(i,0,k){
			ans *= 10;
		}
		out << n*ans/__gcd(ans,n);
		in.close();
		out.close();
	}
}

int main() 
{
	int numberTest = 15;
//	sinhInput(numberTest);
	sinhOutput(numberTest);
	return 0;
}
