#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string a[100];
string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])-96+nho;
        nho=kq/10;
        a[i]=char(kq%10+48);
    }
    return (nho==0) ? a : '1'+a;
}
void Build(){
    a[1]="1",a[2]="1";
    for (ll i=3;i<=90;i++) a[i]=cong(a[i-1],a[i-2]);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Build();
	cin>>n;
	for (ll i=1;i<=n;i++) cout<<a[i]<<" ";
}
