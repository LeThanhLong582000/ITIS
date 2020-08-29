#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

typedef pair<long long, long long> pt;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
long long Create(long long l, long long r)
{ //sinh 1 so tu 1 den n
    return rng() % (r - l + 1) + l;
}
//sinh test nho
void createTest(ofstream &fout)
{
    int N = Create(2, 10);
    int K = Create(2, 100);
    fout << N <<" "<< K<<endl;
    int Vis[N + 5] = {0};
    for (int i = 1; i <= N; i++){
        int x = Create(1,N);
        while (Vis[x] == 1)
        {
            x = Create(1, N);
        }
        Vis[x] = 1;
        fout << x << ' ';
    }
}
//sinh test vua
void createTest2(ofstream &fout)
{
    int N = Create(10, 100);
    int K = Create(100, 100000);
    fout << N << " " << K << endl;
    int Vis[N + 5] = {0};
    for (int i = 1; i <= N; i++)
    {
        int x = Create(1, N);
        while(Vis[x]==1){
            x = Create(1, N);
        }
        Vis[x] = 1;
        fout << x << ' ';
    }
}
//sinh test lon
void createTest3(ofstream &fout)
{
    int N = Create(400, 500);
    long long K = Create(100000000000, 1000000000000);
    fout << N << " " << K << endl;
    int Vis[N + 5] = {0};
    for (int i = 1; i <= N; i++)
    {
        int x = Create(1, N);
        while (Vis[x] == 1)
        {
            x = Create(1, N);
        }
        Vis[x] = 1;
        fout << x << ' ';
    }
}

//cho nay khong can sua
int main()
{
    srand(time(NULL));
    int N = 15;
    for (int i = 0; i < N; i++)
    {
        string s;
        ostringstream convert;
        convert << i + 1;
        s = convert.str();
        string input = "test/" + s + ".in";
        ofstream fout(input.c_str());
        if (i < 5)
            createTest(fout);
        else if (i < 10)
            createTest2(fout);
        else
            createTest3(fout);
        fout.close();
        cout << "Created test:" << i + 1 << endl;
    }
    return 0;
}
