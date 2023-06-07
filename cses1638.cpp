#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005,MOD=1e9+7;
ll n,x[N][N];
char a[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=0;i<=n;i++){
        x[0][i]=0;
        x[i][0]=0;
    }
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=n;j++){
            cin>>a[i][j];
            if (a[i][j]=='*') x[i][j]=0;
            else{
                if (i==1 && j==1) x[i][j]=1;
                else x[i][j]=(x[i-1][j]+x[i][j-1])%MOD;
            }
        }
    cout<<x[n][n];
}
