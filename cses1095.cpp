#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=1e9+7;
ll t,a,b,ans;
void Solve(){
    cin>>a>>b;
    ans=1;
    while (b>0){
        ll d=1,s=a;
        while (d*2<=b){
            d*=2;
            s=(s*s)%MOD;
        }
        b-=d;
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
