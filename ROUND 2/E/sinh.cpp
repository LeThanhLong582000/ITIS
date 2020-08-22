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
		ll t = (ll)rand() * (ll)rand() * (ll)rand() % 20+1;
		out << t << endl;
		while(t--){
			string res = "";
			ll len = (ll)rand() * (ll)rand() * (ll)rand() % 100000+1;
			while(len--){
				ll ran = (ll)rand() * (ll)rand() * (ll)rand() % 100+1;
				if(ran % 2 == 0) res += "(";
				else res += ")";
			}
			out << res << endl;
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
		string s;
		while(t--){
			in >> s;
			stack<int> ST;
			ST.push(-1); //begin node
			int ans = 0;
			for(int i = 0; i < s.length(); i++){
				if(s[i] == '(')
					ST.push(i);
				else{
					ST.pop();
					if(!ST.empty()){
						ans = max(ans, i - ST.top());
					}
					else{ //new node
						ST.push(i);
					}
				}
			}
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
