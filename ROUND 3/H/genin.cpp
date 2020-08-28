#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
vector<bool> isPrime(1000001, true);
vector<int> prime;
int sz;
void Sieve(){
    isPrime[0] = isPrime[1] = false;
	for (int i=2; i<1000001; i++) {
		if (!isPrime[i]) continue;
		for (int j=i; j<=1000000/i; j++) {
			isPrime[i*j] = false;
		}
	}
    for(int i = 2; i <= 1e6; i++){
        if(isPrime[i] == true)
            prime.push_back(i);
    }
    sz = prime.size();
}
typedef pair<int , int> pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
long long Create(long long l, long long r) { 
    return rng() % (r - l + 1) + l;
}
//sinh test nho

void createTest(ofstream & fout) {
    int n = Create(5,100);
    fout << n << '\n';
    for(int i = 1; i <= n; i++){
        int val = Create(1,50);
        fout << val << ' ';
    }
}
//sinh test vua
void createTest2(ofstream & fout) {
    int n = Create(100,1000);
    fout << n << '\n';
    for(int i = 1; i <= n; i++){
        int val = Create(1e3,1e6);
        fout << val << ' ';
    }
}


//sinh test lon
void createTest3(ofstream & fout) {
    int n = 100000;
    fout << n << '\n';
    for(int i = 1; i <= n; i++){
        int pos = Create(0,sz - 1);
        fout << prime[pos] << ' ';
    }
}



int main () {
	srand(time(NULL));
    for(int i = 15 ; i <= 15 ; i++){
        string s;
        ostringstream convert;
        convert << i;
        s=convert.str();
        string input = "test/"+ s + ".in";
        ofstream fout(input.c_str());
        if (1 <= i && i <= 5 ) createTest(fout);
        else if ( 6 <= i && i <= 10) createTest2(fout);
        else createTest3(fout);
        fout.close();
        cout << "Created test:" << i << endl;
    }
    return 0;
}
