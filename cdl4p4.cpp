#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string a,s="1";
string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])+nho-96;
        a[i]=char(kq%10+48);
        nho=kq/10;
    }
    if (nho==1) a='1'+a;
    return a;
}
string nhan1(string a, char b){
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=(int(a[i])-48)*(int(b)-48)+nho;
        a[i]=char(kq%10+48);
        nho=kq/10;
    }
    if (nho>0) a=char(nho+48)+a;
    return a;
}
string nhan2(string a, string b){
    string c="";
    for (ll i=0;i<b.size();i++)
        c=cong(c+'0',nhan1(a,b[i]));
    return c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>n;
    for (ll i=1;i<=n;i++) s=nhan2(s,a);
    cout<<s;
}
