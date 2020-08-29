#include<bits/stdc++.h>
#define ll long long
#define for(i,a,b) for(long long i = a; i < b; i++)
#define ld long double
using namespace std;

ll n, k;
ll a[200005];
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
		n = creat(1, 1e2); 
		out << n << endl;
		for(j,0,n){
			k = creat(1,100); out << k << " ";
		}
    	out.close();
	}
	for (i,5,11) 
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		n = creat(1e2, 1e4); 
		out << n << endl;
		for(j,0,n){
			k = creat(1,100); out << k << " ";
		}
    	out.close();
	}
	for (i,11,15)
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		n = creat(1e4, 200005); 
		out << n << endl;
		for(j,0,n){
			k = creat(1,100); out << k << " ";
		}
    	out.close();
	}
	char fileIn[20];
	sprintf(fileIn, "%d.in", 15);
	fstream out(fileIn, ios::out);
	n = 200000; 
	out << n << endl;
	for(j,0,n){
		k = creat(1,100); out << k<< " ";
	}
    out.close();
    cout << "Input Complete " << endl;
}

void sinhOutput(int numberTest) 
{
	cout <<  "----------bat dau sinh output----------------" << endl;
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
		ll odd = 0, even = 0, sum = 0;
		for(i,0,n){
			in >> a[i];
			sum+= a[i];
			if(a[i]%2 == 0) even++;
			else odd++;
		}
		if(even == n){
			out << 0;
			cout << "Test " << j << " complete - " << "ans " << "0"  << " with " << n << endl;
			continue;
		}
		if(odd%2 != 0){
			out << sum;
			cout << "Test " << j << " complete - " << "ans " << sum  << " with " << n << endl;
			continue;
		}
		sort(a,a+n);
		for(i,0,n){
			if(a[i]%2!=0){
				sum -= a[i];
				break;
			}
		}
		out << sum;
		cout << "Test " << j << " complete - " << "ans " << sum  << " with " << n << endl;
		in.close();
		out.close();
	}
	cout << "output complete";
}

int main() 
{
	int numberTest = 15;
//	sinhInput(numberTest);
	sinhOutput(numberTest);
	return 0;
}
