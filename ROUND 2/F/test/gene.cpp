#include<bits/stdc++.h>
#define ll long long
#define for(i,a,b) for(long long i = a; i < b; i++)
#define ld long double
using namespace std;

int t, str, inte, expe;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int creat(int a ,int b)						
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
		t = 100; 
		out << t <<endl;
		while(t--){
			str = creat(1,1e3);
			inte = creat(1,1e3);
			expe = creat(1,1e3);
			out << str << " " << inte << " " << expe << endl;
		}	
        out.close();
	}
	for (i,5,11) 
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		t = 100; 
		out << t <<endl;
		while(t--){
			str = creat(1e3,1e6);
			inte = creat(1e3,1e6);
			expe = creat(1e3,1e6);
			out << str << " " << inte << " " << expe << endl;
		}	
        out.close();
	}
	for (i,11,16)
	{
		char fileIn[20];
		sprintf(fileIn, "%d.in", i);
		fstream out(fileIn, ios::out);
		t = 100; 
		out << t <<endl;
		while(t--){
			str = creat(1e6,1e8);
			inte = creat(1e6,1e8);
			expe = creat(1e6,1e8);
			out << str << " " << inte << " " << expe << endl;
		}	
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
		in >> t;
		while(t--){
			in >> str >> inte >> expe;
			int minAddstr = max(0,(expe+inte-str+2)/2);
        	out << max(expe - minAddstr + 1, 0) << endl;	
		}
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
