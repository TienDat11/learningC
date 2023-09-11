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
    string id,name,ns,lop;
    float gpa;
public:
    SinhVien();
    friend ostream& operator << (ostream&,SinhVien );
    friend istream& operator >> (istream&,SinhVien&);
};

SinhVien::SinhVien()
{
    id = name = ns = lop =" ";
    gpa = 0;
}

ostream& operator << (ostream& out,SinhVien a){
    out <<a.id<<" "<< a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa<<endl;
    return out;
}

istream& operator >> (istream& in,SinhVien& a){
    a.id = "22T1020053";
    in.ignore();
    getline(in,a.name);
    in >>a.lop>>a.ns>>a.gpa;
    a.ns = chuanhoa(a.ns);
    return in;
}


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}


