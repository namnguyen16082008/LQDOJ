#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll H=1005,MOD=1e9+7;
ll h,w,x[H][H];
char a[H][H];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>h>>w;
    for (ll i=1;i<=h;i++) x[i][0]=0;
    for (ll j=1;j<=w;j++) x[0][j]=0;
    for (ll i=1;i<=h;i++)
        for (ll j=1;j<=w;j++)
            cin>>a[i][j];
    x[1][1]=1;
    for (ll i=1;i<=h;i++)
        for (ll j=1;j<=w;j++)
            if (i!=1 || j!=1){
                if (a[i][j]=='#') x[i][j]=0;
                else x[i][j]=(x[i-1][j]+x[i][j-1])%MOD;
            }
    cout<<x[h][w];
}
