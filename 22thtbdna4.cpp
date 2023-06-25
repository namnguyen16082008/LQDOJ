#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100;
ll n,m,x,y;
string a[N+5][N+5]={};
string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])+nho-96;
        nho=kq/10;
        a[i]=char(kq%10+48);
    }
    return (nho==0) ? a : '1'+a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Robot.inp","r",stdin);
    freopen ("Robot.out","w",stdout);
    cin>>n>>m;
    for (ll i=1;i<=m;i++){
        cin>>x>>y;
        a[x][y]="-1";
    }
    for (ll i=0;i<=n;i++){
        a[i][0]="0";
        a[0][i]="0";
    }
    a[1][1]="1";
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=n;j++)
            if (i!=1 || j!=1){
                if (a[i][j]=="-1") a[i][j]="0";
                else a[i][j]=cong(a[i-1][j],a[i][j-1]);
            }
    cout<<a[n][n];
}
