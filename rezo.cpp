#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,s=0,ans=0;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    mp[0]=1;
    for (ll i=1;i<=n;i++){
        cin>>a;
        s+=a;
        ans+=mp[s];
        mp[s]++;
    }
    cout<<ans;
}
