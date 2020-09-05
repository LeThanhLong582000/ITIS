#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void sinhInput(int Begin,int numberTest) {
	srand (time(NULL));
	for (int i = Begin; i <= numberTest; i++) {
		char fileIn[20];
		sprintf(fileIn, "test/%d.in", i);
		fstream out(fileIn, ios::out);
		// Bat dau sinh input
		ll n = (ll)rand() * (ll)rand() * (ll)rand() % 20+1;
		ll m = (ll)rand() * (ll)rand() * (ll)rand() % 20+1;
		
		if(n < 10) n += 10;
		if(m < 10) m += 10;
		out << n << " " << m << endl;
		ll size = (ll)rand() * (ll)rand() * (ll)rand() % 5+1;
		if(size % 2 == 0) size++;
		ll si = (ll)rand() * (ll)rand() * (ll)rand() % (n-10)+1;
		ll sj = (ll)rand() * (ll)rand() * (ll)rand() % (m-10)+1;
		char A[n][m];
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
				A[i][j] = 'W';
		for(int i = si; i < si + size; i++)
			for(int j = sj; j < sj + size; j++)
				A[i][j] = 'B';
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++)
				out << A[i][j];
			out << endl;
		}
		
	}
}
void sinhOutput(int Begin,int numberTest) {
	srand (time(NULL));
	for (int i = Begin; i <= numberTest; i++){
		char fileIn[20];
		char fileOut[20];
		sprintf(fileIn, "test/%d.in", i);
		sprintf(fileOut, "test/%d.out", i);
		fstream in(fileIn, ios::in);
		fstream out(fileOut, ios::out);
		// Bat dau sinh output
		int n, m;
  	in >> n >> m;
  	char A[n][m];
  	for (int r = 0; r < n; r++) {
    	for (int c = 0; c < m; c++) {
      		in >> A[r][c];
		}
  	}
  	int br = -1, bc = -1;
  	int len = 0;
  	for (int r = 0; r < n; r++) {
    	for (int c = 0; c < m; c++) {
      		if (A[r][c] == 'B') {
        		if (br == -1 and bc == -1) {
          			br = r;
          			bc = c;
        		}
        		len++;
      		}
    	}
    	if (br != -1 and bc != -1) {
      		break;
    	}
  	}
  	br += len / 2 + 1;
  	bc += len / 2 + 1;
  	out << br << " " << bc << endl;
	}
}
int main()
{
    int numberTest,Begin;
	cin >>Begin>> numberTest;
	sinhInput(Begin,numberTest);
	sinhOutput(Begin,numberTest);
    return 0;
}
