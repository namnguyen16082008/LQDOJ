#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=1e9+7;
ll a,n;
ll Power(ll a, ll n){
    ll ans=1;
    while (n>0){
        ll s=a,d=1;
        while (d*2<=n){
            d*=2;
            s=(s*s)%MOD;
        }
        n-=d;
        ans=(ans*s)%MOD;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>n;
    cout<<Power(a,n);
}
