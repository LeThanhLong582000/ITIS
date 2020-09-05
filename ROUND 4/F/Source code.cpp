#include<bits/stdc++.h>
#define ll long long
#define for(i,a,b) for(long long i = a; i < b; i++)
#define ld long double
using namespace std;

ll n, ans = 1;
main()
{
	cin >> n;
	ll s = n;
	for(i, 2, sqrt(s + 1))
	{
		if (n % i == 0)
		{
			ans *= i;
			while (n%i == 0)
			{
				n /= i;
//				cout << "n = "<< n << endl;
			}
		}
	}
	
	cout << ans*n;
}
