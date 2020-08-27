#include<bits/stdc++.h>
using namespace std;

long long n,k;
long long a[200006];

main(){
	cin >> n;
	long long odd = 0, even = 0, sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum+= a[i];
		if(a[i]%2 == 0) even++;
		else odd++;
	}
	if(even == n){
		cout << 0;
		return 0;
	}
	if(odd%2 != 0){
		cout << sum;
		return 0;
	}
	sort(a,a+n);
	for(int i = 0; i < n; i++){
		if(a[i]%2!=0){
			sum -= a[i];
			break;
		}
	}
	cout << sum;
}
