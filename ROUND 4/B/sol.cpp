#include <iostream>

using namespace std;

int main(){
	long long n;
	cin>>n;
	
	if (n%2==0){
		long long num1 = 0, num2 = 0;
		long long res = n/2;
		cout<<res;
	}
	else {
		long long num1 = 0, num2 = 0;
		long long res = -(n+1)/2;
		cout<<res;
	}
	return 0;
}
