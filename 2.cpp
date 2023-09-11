#include<bits/stdc++.h>

using namespace std;
string chuanhoa(string s){
    if(s[2] != '/')
        s = '0' + s;
    if(s[5] != '/')
        s.insert(3,"0");
    return s;
}

class SinhVien {
    private:
        string id,name,ns,Lop;
        double gpa;
    public:
        SinhVien(){
            id = name = ns = "";
            gpa = 0;
        }
        SinhVien(string name,string ns ,double gpa){
            this->name = name;
            this->ns = ns;
            this->gpa = gpa;
        }
        friend void nhap(SinhVien&);
        friend void xuat(SinhVien);
};

void nhap(SinhVien &a){
    a.id = '22T10220053';
    cin.ignore();
    getline(cin , a.name);
    cin.ignore();
    cin >> a.Lop >>  a.ns >> a.gpa ;
    a.ns = chuanhoa(a.ns);
}

void xuat(SinhVien a){
    cout << a.id << " " << a.name << " " <<a.Lop << " "<< a.ns << fixed << setprecision(2) << " " << a.gpa << endl;
}



int main(){
    SinhVien a;
    nhap(a);
    xuat(a);
    return 0;
}