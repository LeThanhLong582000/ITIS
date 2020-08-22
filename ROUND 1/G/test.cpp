#include <bits/stdc++.h>
using namespace std;
class canbo
{
    private :
        string hoten;
        long long luongcoban;
    public:
        void nhapbp();
        void xemmh();
};

class danhsach
{
    private:
        canbo dscanbo[100];
        int tongsocanbo;
    public:
        void nhapbp();
        void xemmh();
};

void canbo::nhapbp() {
    cout << "Ho Ten:";
    cin >> this->hoten;
    cout << "Luong co ban:";
    cin >> this->luongcoban;
}
void canbo::xemmh() {
    cout << this->hoten << endl;
    cout << this->luongcoban << endl;
}
void danhsach::nhapbp() {
    cin >> this->tongsocanbo;
    int n = this->tongsocanbo;
    for (int i = 0; i < n; i++)
    {
        dscanbo[i].nhapbp();
    }
}
void danhsach::xemmh() {
    cout << "Tong So can bo:" << this->tongsocanbo << endl;
    int n = this->tongsocanbo;
    for (int i = 0; i < n; i++)
    {
        dscanbo[i].xemmh();
    }
}
int main()
{
    
    return 0;
}