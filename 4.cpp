#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s){
    if(s[2] != '/')
        s = '0' + s;
    if(s[5] != '/')
        s.insert(3,"0");
    return s;
}
class SinhVien
{
private:
    string id,name,lop,ns,email;
    float gpa;
public:
    SinhVien();
    friend ostream& operator << (ostream&,SinhVien);
    friend istream& operator >> (istream&,SinhVien&);
    string getLop();
};

SinhVien::SinhVien()
{
    id = name = lop = ns = email = " ";
    gpa = 0;
}
ostream& operator << (ostream& out,SinhVien a){
    out << a.id << " "<< a.name << " "<< a.lop << " "<< " "<< a.ns << " " << fixed << setprecision(2) << a.gpa << " " << a.email << endl;
    return out;
}
bool cmp(SinhVien a, SinhVien b){
    return a.getLop() < b.getLop();
}
istream& operator >> (istream& in, SinhVien& a){
    in >> a.id;
    in.ignore();
    getline(in,a.name);
    in.ignore();
    in >> a.lop >> a.ns >> a.gpa >> a.email;
    return in;
}

string SinhVien::getLop(){
    return this->lop;
}

int main(){
    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n ;i++){
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    for(SinhVien x : a){
        cout << x ;
    }
}
