#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
unordered_map <ll,ll> mp;
ll n,x,a,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans+=mp[x-a];
        mp[a]++;
    }
    cout<<ans;
}
