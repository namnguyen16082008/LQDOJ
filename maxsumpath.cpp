#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000;
ll n,m,a[N+5][N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++) a[i][0]=0;
    for (ll j=1;j<=m;j++) a[0][j]=0;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++){
            cin>>a[i][j];
            a[i][j]+=max(a[i-1][j],a[i][j-1]);
        }
    cout<<a[n][m];
}
