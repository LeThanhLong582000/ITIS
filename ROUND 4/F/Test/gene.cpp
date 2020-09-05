#include<bits/stdc++.h>
#define ll long long
#define for(i,a,b) for(long long i = a; i < b; i++)
#define ld long double
using namespace std;

ll n;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll creat(ll a ,ll b)						
{											
	return (ll)rng() % (b - a + 1) + a;					// Create random number in [a, b]
}

ll solve(ll n)
{
	ll s = n, ans = 1;
	for(i, 2, sqrt(s + 1))
	{
		if (n % i == 0)
		{
			ans *= i;
			while (n%i == 0)
			{
				n /= i;
//				cout << "n = "<< n << endl;
			}
		}
	}
	return ans*n;
}
void sinhInput(int numberTest) 
{
	for (i, 1, 6) 
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		n = creat(1,1e4); 
		out << n;
        out.close();
	}
	for (i,5,11) 
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		n = creat(1e4,1e9); 
		out << n;
        out.close();
	}
	for (i,11,16)
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		n = creat(1,1e6)*creat(1,1e6);
		out << n;
        out.close();
	}
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
		in >> n;
		out << solve(n);
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
