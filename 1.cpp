#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a,ll b){
    if(b == 0) return a;
    return gcd(b,a%b);  
}

ll lcm(ll a,ll b){
    return a / gcd(a,b) * b;
}
class PhanSo {
    private:
      ll tu,mau;
    public:
        PhanSo(ll tu,ll mau);            
        friend ostream& operator << (ostream&,PhanSo);
        friend istream& operator >> (istream&,PhanSo&);
        friend PhanSo operator + (PhanSo,PhanSo);
        void rutgon();
};

PhanSo::PhanSo(ll tu,ll mau){
    this->tu = tu;
    this->mau = mau;
}
ostream& operator << (ostream& out,PhanSo a){
    out << a.tu << "/" << a.mau <<endl;
    return out;
}

istream& operator >> (istream& in,PhanSo &a){
    in >> a.tu >> a.mau;
    return in;
}

PhanSo operator + (PhanSo a, PhanSo b){
    PhanSo tong(1,1);
    ll mc = lcm(a.mau,b.mau);
    tong.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
    tong.mau = mc;
    ll g = gcd(tong.tu,tong.mau);
    tong.tu /= g;
    tong.mau /= g;
    return tong; 
}
void PhanSo::rutgon(){
    ll g = gcd(tu,mau);
    tu /= g;
    mau /= g;

}


int main(){
    // PhanSo p(1,1);
    // cin >> p;
    // p.rutgon();
    // cout << p;
    // return 0;

    PhanSo p(1,1) , q(1,1);
    cin >> p >> q;
    cout << p + q;
}