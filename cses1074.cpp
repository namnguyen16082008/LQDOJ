#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005,inf=1e+18;
ll n,ans,s=0,a[N],x[N],y[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=n;i++){
        s+=a[i];
        x[i]=a[i]*i-s;
    }
    s=0;
    for (ll i=n;i>=1;i--){
        s+=a[i];
        y[i]=s-a[i]*(n-i+1);
    }
    ans=inf;
    for (ll i=1;i<=n;i++) ans=min(ans,x[i]+y[i]);
    cout<<ans;
}
