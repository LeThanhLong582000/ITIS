#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, i, j, a, b, m;
	cin >> t;
	while (t--)
	{
		cin >> a;
		m = 0;
		if (a == 2)
			cout << "Lin" << '\n';
		else if (a == 1)
			cout << "Shin" << '\n';
		else if (a % 2 != 0)
			cout << "Lin" << '\n';
		else
		{
			for (i = 2; i <= sqrt(a); i++)
			{
				if (a % i != 0) continue;
				if (i % 2 == 1 && (a / i) != 2)
					m = 1;
				if ((a / i) % 2 == 1 && i != 2)
					m = 1;
			}
			if (m)
				cout << "Lin" << '\n';
			else
				cout << "Shin" << '\n';
		}
	}
	return 0;
}
