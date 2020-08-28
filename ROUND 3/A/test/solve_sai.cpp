#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5 + 100;

int n;
long long a[maxn];
long long ans = 0;
int main()
{
    freopen("12.in", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    long long res = 0, sum = 0;
    for (int i = n; i >= 1; i--)
    {
        res += a[i] + sum;
        sum += a[i];
        ans = max(ans, res);
        if (res < 0)
            res = 0, sum = 0;
        if (res == 0 && sum < 0)
            sum = 0;
        if (res + sum < 0)
            sum = 0, res = 0;
    }
    cout << ans;
    return 0;
}
