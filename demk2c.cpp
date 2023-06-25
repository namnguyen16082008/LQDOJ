#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,k,a,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++){
            cin>>a;
            ans+=a==k;
        }
    cout<<ans;
}
