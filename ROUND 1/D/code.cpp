#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int Digit_8 = n/4;
		if (n%4!=0) Digit_8++;
		for(int i=1;i<=n-Digit_8;i++)
			cout << "9";
		for(int i=1;i<=Digit_8;i++)
			cout << "8";
		cout << endl;		
	}
	return 0;
}

