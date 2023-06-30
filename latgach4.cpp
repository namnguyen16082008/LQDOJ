#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD= 111539786;
ll t,n;
void Solve(){
    cin>>n;
    n--;
    ll a[2][2]={1,1,1,0};
    while (n>0){
        ll d=1,s[2][2]={1,1,1,0};
        while (d*2<=n){
            d*=2;
            ll u[2][2]={s[0][0],s[0][1],s[1][0],s[1][1]};
            for (ll i=0;i<2;i++)
                for (ll j=0;j<2;j++)
                    s[i][j]=(u[i][0]*u[0][j]+u[i][1]*u[1][j])%MOD;
        }
        n-=d;
        ll u[2][2]={a[0][0],a[0][1],a[1][0],a[1][1]};
        for (ll i=0;i<2;i++)
            for (ll j=0;j<2;j++)
                a[i][j]=(u[i][0]*s[0][j]+u[i][1]*s[1][j])%MOD;
    }
    cout<<a[0][0]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
