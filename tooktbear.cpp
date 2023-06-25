#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k,a,ans=0;
vector <ll> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=n;j++){
            cin>>a;
            v.push_back(a);
        }
    sort(v.begin(),v.end(),greater<ll>());
    for (ll i=0;i<k;i++) ans+=v[i];
    cout<<ans;
}
