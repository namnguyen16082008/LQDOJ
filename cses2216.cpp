#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005;
ll n,a,x,ans=1,mp[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        mp[a]=i;
    }
    for (ll i=n;i>1;i--) ans+=mp[i]<mp[i-1];
    cout<<ans;
}
