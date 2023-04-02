#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a[10001],ans=-1e+18;
ll nt(ll n){
    if (n<2) return 0;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (nt(a[i])==1) ans=max(ans,a[i]);
    }
    cout<<ans<<endl;
    for (ll i=1;i<=n;i++)
        if (a[i]==ans) cout<<i<<" ";
}
