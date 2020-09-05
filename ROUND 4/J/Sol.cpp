#include <bits/stdc++.h>
const int maxn = 2e5 + 10;
 
using namespace std;
 
long long a[maxn];
long long n, res;
 
int main() {
	cin >> n;
	for(int i = 1; i <= n; ++i) 
	{
		cin >> a[i];
	}
	if(n >= 2021) 
	{
		cout << 0;
		return 0;
	}
	res = 1;
	for(int i = 2; i <= n; ++i) 
	{
		for(int j = i - 1; j >=  1; --j) 
		{
			res *= abs(a[i] - a[j]);
			res %= 2020;
		}
	}
	cout << res;
}
