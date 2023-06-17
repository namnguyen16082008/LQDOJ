#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,a,ans=0;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n+m;i++){
        cin>>a;
        ans+=mp[a]==0;
        mp[a]=1;
    }
    cout<<ans;
}
