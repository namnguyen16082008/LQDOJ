#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000,inf=1e+18;
ll n,ans=inf,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        ans=min(ans,a[i]);
    }
    cout<<ans<<endl;
    for (ll i=1;i<=n;i++)
        if (a[i]==ans) cout<<i<<" ";
}
