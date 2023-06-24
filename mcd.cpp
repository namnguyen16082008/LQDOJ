#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll a,b,d,ans=-inf;
ll Tcs(ll n){
    ll s=0;
    while (n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    d=__gcd(a,b);
    for (ll i=1;i<=sqrt(d);i++)
        if (d%i==0) ans=max(ans,max(Tcs(i),Tcs(d/i)));
    cout<<ans;
}
