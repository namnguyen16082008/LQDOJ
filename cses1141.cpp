#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005,inf=1e+18;
ll n,a[N],d=1,ans=-inf;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
        while (mp[a[i]]>1){
            mp[a[d]]--;
            d++;
        }
        ans=max(ans,i-d+1);
    }
    cout<<ans;
}
