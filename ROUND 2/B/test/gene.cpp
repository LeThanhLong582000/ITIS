#include<bits/stdc++.h>
#define ll long long
#define for(i,a,b) for(long long i = a; i < b; i++)
#define ld long double
using namespace std;

ll n, a[300006];
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
		n = creat(1, 100); 
		for(i,0,n)
		{
			a[i] = creat(0, 9);
			out << a[i];
		}
		a[n]= NULL;
    	out.close();
	}
	for (i,5,11) 
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		n = 300000;
		for(i,0,n)
		{
			a[i] = creat(0, 9);
			out << a[i];
		}
		a[n]= NULL;
    	out.close();
	}
	for (i,11,15)
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		n = 300000; 
		for(i,0,n)
		{
			a[i] = creat(0, 9);
			out << a[i];
		}
		a[n]= NULL;
    	out.close();
	}
	char fileIn[20];
	sprintf(fileIn, "%d.in", 15);
	fstream out(fileIn, ios::out);
	n = 300000; 
	for(i,0,n)
	{
		a[i] = 4;
		out << a[i];
	}
	a[n]= NULL;
    out.close();
}

void sinhOutput(int numberTest) 
{
	for (j, 1, numberTest+1) 
	{
		string s;
		char fileIn[20];
		char fileOut[20];
		sprintf(fileIn,"%d.in", j);
		sprintf(fileOut, "%d.out", j);
		fstream in(fileIn, ios::in);
		fstream out(fileOut, ios::out);
		// bat dau sinh output
		in >> s;
		ll si = s.size();
		ll res = 0;
		if ((s[0] - '0') % 4 == 0) res = 1;
		for(i,1,si){
			if(((s[i] - '0') % 4) == 0) res++;
			if(((s[i-1] - '0')*10 + (s[i] - '0')) % 4 == 0) res += i;
		}
		out << res;
		in.close();
		out.close();
	}
}

int main() 
{
	int numberTest = 15;
	sinhInput(numberTest);
	sinhOutput(numberTest);
	return 0;
}
