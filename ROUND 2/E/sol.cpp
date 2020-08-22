#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		stack<int> ST;
		ST.push(-1); //begin node
		int ans = 0;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '(')
				ST.push(i);
			else{
				ST.pop();
				if(!ST.empty()){
					ans = max(ans, i - ST.top());
				}
				else{ //new node
					ST.push(i);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}

