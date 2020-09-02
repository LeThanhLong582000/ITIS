#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+2];
		for(int i=1;i<=n;i++) cin >> a[i];
		int le = 1;
		int chan = 1;
		for(int i=1;i<=n;i++)
			if(a[i]%2==0) {
				le=0;
				break;
			} 
		for(int i=1;i<=n;i++)
			if(a[i]%2!=0) {
				chan=0;
				break;
			}
		if(chan==1 || (le==1 && n%2==0)) cout <<"NO";
		else cout << "YES";
		cout << endl;	 	
}
	return 0;
	
}
