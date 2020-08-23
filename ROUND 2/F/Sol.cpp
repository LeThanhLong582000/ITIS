#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define pb push_back

using namespace std;

int t, str, inte, expe;
main(){
	cin >> t;
	while(t--){
		cin >> str >> inte >> expe;
		int minAddstr = max(0,(expe+inte-str+2)/2);
        cout << max(expe - minAddstr + 1, 0) << endl;	
	}
}
