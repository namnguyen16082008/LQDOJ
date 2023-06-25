#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,a,b,x[20];
void Build(){
    x[0]=1;
    for (ll i=1;i<=18;i++) x[i]=x[i-1]*10;
}
ll Dcs(ll n){
    ll s=0;
    while (n>0){
        n/=10;
        s++;
    }
    return s;
}
ll Cal1(ll i, ll n){
    ll s=(n+1)/x[i]*(x[i]/2*9),o=(n+1)%x[i];
    return s+(o/x[i-1]-1)*(o/x[i-1])/2*x[i-1]+(o%x[i-1])*(o/x[i-1]);
}
ll Cal(ll n){
    ll ans=0;
    for (ll i=1;i<=Dcs(n);i++)
        ans+=Cal1(i,n);
    return ans;
}
void Solve(){
    cin>>a>>b;
    cout<<Cal(b)-Cal(a-1)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>t;
    while (t--) Solve();
}
