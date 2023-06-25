#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200000;
ll n,ans=0,a[N+5],x[N+5],y[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    x[0]=0,y[n+1]=0;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        x[i]=max(x[i-1],a[i]);
    }
    for (ll i=n;i>=1;i--) y[i]=max(y[i+1],a[i]);
    for (ll i=1;i<=n;i++) ans+=min(x[i],y[i])-a[i];
    cout<<ans;
}
