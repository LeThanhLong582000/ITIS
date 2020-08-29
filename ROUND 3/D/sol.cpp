#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
bool p[1000002];
long long a[1002];
void sang(){
	memset(p,true,sizeof(p));
	p[1]=false;
	for(int i=2;i<=10000;i++)
		if(p[i]){
		//	cout << i << endl;
			for(long long j=i*i;j<=10000;j+=i)
				p[j]=false;
			}
			
	a[1] = 2;
	int i = 2;
	int x = 3;
	while(i<=1000){
		if(p[x]) {
			a[i] = x;
			i++;
		}
		x+=2;
	}
//	for(int i=1;i<=1000;i++)
//	 cout << a[i] << endl;			
}

int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}

