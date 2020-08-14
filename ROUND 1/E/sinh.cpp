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
			ll num = (ll)rand() * (ll)rand() * (ll)rand() % 1000000000000000000+1;
			out << num << " ";
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
		ll t, num;
		in >> t;
		while(t--){
			in >> num;
			ll num14 = num % 14;
			if((num > 14) && (num14 >= 1 && num14 <= 6))
				out << "YES" << endl;
			else 
				out << "NO" << endl;
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
