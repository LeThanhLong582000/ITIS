#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
 
string s;
 
main(){
	cin >> s;
	ll si = s.size();
	ll res = 0;
	if ((s[0] - '0') % 4 == 0) res = 1;
	for(ll i = 1; i < si; i++){
		if(((s[i] - '0') % 4) == 0) res++;
		if(((s[i-1] - '0')*10 + (s[i] - '0')) % 4 == 0) res += i;
	}
	cout << res;
}
 