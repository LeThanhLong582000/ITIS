#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

long long a[55];
void xuli(){
	a[0]=1;
	a[1]=1;
	a[2]=2;
	a[3]=4;
	a[4]=8;
	for(int i=5;i<=50;i++){
		a[i] = 2*a[i-1]-a[i-5];
		}
		
		
}

int main(){
	xuli();
	int t;
	for(int i=1;i<=50;i++) cout << a[i] << endl;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}

