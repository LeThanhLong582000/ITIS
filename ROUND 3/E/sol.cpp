#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int ans = (n * m - 1) * n * m;
        if(n >= 1 && m >= 2)
            ans -= (4 * (n - 1) * (m - 2));
        if(n >=2 && m >=1 )
            ans -= (4 * (n - 2) * (m - 1));
        cout << ans << endl;
    }
    return 0;
}

