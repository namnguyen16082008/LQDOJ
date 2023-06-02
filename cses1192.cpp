#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005;
ll n,m,a[N][N]={},ans=0;
char x[N][N];
void Next(ll i, ll j){
    a[i][j]=1;
    if (x[i-1][j]=='.' && i>1 && a[i-1][j]==0) Next(i-1,j);
    if (x[i+1][j]=='.' && i<n && a[i+1][j]==0) Next(i+1,j);
    if (x[i][j-1]=='.' && j>1 && a[i][j-1]==0) Next(i,j-1);
    if (x[i][j+1]=='.' && j<m && a[i][j+1]==0) Next(i,j+1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            cin>>x[i][j];
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            if (x[i][j]=='.' && a[i][j]==0){
                ans++;
                Next(i,j);
            }
    cout<<ans;
}
