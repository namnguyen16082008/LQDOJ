#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll x,n,m;
ll Power(ll a, ll b){
    ll ans=1;
    while (b>0){
        ll s=a,d=1;
        while (d*2<=b){
            d*=2;
            s=(s*s)%m;
        }
        b-=d;
        ans=(ans*s)%m;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>n>>m;
    if (x==1){
        cout<<n%m;
        return 0;
    }
    m*=(x-1);
    cout<<((Power(x,n+1)-1+m)%m)/(x-1);
}
