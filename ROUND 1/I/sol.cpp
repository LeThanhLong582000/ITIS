#include <bits/stdc++.h>
const int maxn = 1e6 + 10;
	
using namespace std;
	
int n, m;
vector<vector<int>> a;
	
void Slove2()
{
	int res = INT_MAX;
	if(n == 2)
	{
		vector<int> Two(m + 1, 0);
		for(int i = 1; i <= m; ++i)
		{
			Two[i] = (a[1][i] + a[2][i]) % 2;
		}
		int ans = 0;
		int cnt = 0;
		for(int i = 1; i <= m; ++i)
		{
			if(ans != Two[i]) cnt++;
			ans ^= 1;
		}
		res = min(res, cnt);
		cnt = 0;
		ans = 1;
		for(int i = 1; i <= m; ++i)
		{
			if(ans != Two[i]) cnt++;
			ans ^= 1;
		}
		res = min(res, cnt);
	}
	else
	{
		vector<int> Two(n + 1, 0);
		for(int i = 1; i <= n; ++i)
		{
			Two[i] = (a[i][1] + a[i][2]) % 2;
		}
		int ans = 0;
		int cnt = 0;
		for(int i = 1; i <= n; ++i)
		{
			if(ans != Two[i]) cnt++;
			ans ^= 1;
		}
		res = min(res, cnt);
		cnt = 0;
		ans = 1;
		for(int i = 1; i <= n; ++i)
		{
			if(ans != Two[i]) cnt++;
			ans ^= 1;
		}
		res = min(res, cnt);
	}
	cout << res;
}
	
void Slove3()
{
	int res = INT_MAX;
	if(n == 3)
	{
		vector<int> Up(m + 1, 0);
		vector<int> Down(m + 1, 0);
		for(int i = 1; i <= m; ++i)
		{
			Up[i] = (a[1][i] + a[2][i]) % 2;
			Down[i] = (a[2][i] + a[3][i]) % 2;
		}
		int cnt = 0;
		int ansu = 0, ansd = 0;
		for(int i = 1; i <= m; ++i)
		{
			if(ansu != Up[i] || ansd != Down[i])
			{
				cnt++;
			}
			ansu ^= 1;
			ansd ^= 1;
		}
		res = min(res, cnt);
		cnt = 0;
		ansu = 0;
		ansd = 1;
		for(int i = 1; i <= m; ++i)
		{
			if(ansu != Up[i] || ansd != Down[i])
			{
				cnt++;
			}
			ansu ^= 1;
			ansd ^= 1;
		}
		res = min(res, cnt);
		cnt = 0;
		ansu = 1;
		ansd = 0;
		for(int i = 1; i <= m; ++i)
		{
			if(ansu != Up[i] || ansd != Down[i])
			{
				cnt++;
			}
			ansu ^= 1;
			ansd ^= 1;
		}
		res = min(res, cnt);
		cnt = 0;
		ansu = 1;
		ansd = 1;
		for(int i = 1; i <= m; ++i)
		{
			if(ansu != Up[i] || ansd != Down[i])
			{
				cnt++;
			}
			ansu ^= 1;
			ansd ^= 1;
		}
		res = min(res, cnt);
	}
	else
	{
		vector<int> Up(n + 1, 0);
		vector<int> Down(n + 1, 0);
		for(int i = 1; i <= n; ++i)
		{
			Up[i] = (a[i][1] + a[i][2]) % 2;
			Down[i] = (a[i][2] + a[i][3]) % 2;
		}
		int cnt = 0;
		int ansu = 0, ansd = 0;
		for(int i = 1; i <= n; ++i)
		{
			if(ansu != Up[i] || ansd != Down[i])
			{
				cnt++;
			}
			ansu ^= 1;
			ansd ^= 1;
		}
		res = min(res, cnt);
		cnt = 0;
		ansu = 0;
		ansd = 1;
		for(int i = 1; i <= n; ++i)
		{
			if(ansu != Up[i] || ansd != Down[i])
			{
				cnt++;
			}
			ansu ^= 1;
			ansd ^= 1;
		}
		res = min(res, cnt);
		cnt = 0;
		ansu = 1;
		ansd = 0;
		for(int i = 1; i <= n; ++i)
		{
			if(ansu != Up[i] || ansd != Down[i])
			{
				cnt++;
			}
			ansu ^= 1;
			ansd ^= 1;
		}
		res = min(res, cnt);
		cnt = 0;
		ansu = 1;
		ansd = 1;
		for(int i = 1; i <= n; ++i)
		{
			if(ansu != Up[i] || ansd != Down[i])
			{
				cnt++;
			}
			ansu ^= 1;
			ansd ^= 1;
		}
		res = min(res, cnt);
	}
	cout << res;
}
	
int main()
{
	cin >> n >> m;
	a.resize(n + 1);
	for(int i = 1; i <= n; ++i)
	{
		a[i].resize(m + 1);
	}
	for(int i = 1; i <= n; ++i)
	{
		string Lin;
		cin >> Lin;
		for(int j = 1; j <= m; ++j)
		{
			a[i][j] = Lin[j - 1] - '0';
		}
	}
	if(n >= 4 && m >= 4)
	{
		cout << -1;
		return 0;
	}
	if(n == 1 || m == 1)
	{
		cout << 0;
		return 0;
	}
	if(n == 2 || m == 2)
	{
		Slove2();
	}
	else
	{
		Slove3();
	}
}