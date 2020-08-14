#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t, num;
	cin >> t;
	while(t--){
		cin >> num;
		ll num14 = num % 14;
		if((num > 14) && (num14 >= 1 && num14 <= 6))
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}

