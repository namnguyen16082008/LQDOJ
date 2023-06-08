#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=1e9+7;
ll t,a,n,ans;
void Solve(){
    ans=1;
    cin>>a>>n;
    n=n*(n+1)/2;
    while (n>0){
        ll d=1,s=a;
        while (d*2<=n){
            d*=2;
            s=(s*s)%MOD;
        }
        n-=d;
        ans=(ans*s)%MOD;
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
