#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005;
ll n,x,a[N];
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (mp[x-a[i]]==1){
            for (ll j=1;j<i;j++)
                if (a[j]==x-a[i]){
                    cout<<j<<" "<<i;
                    return 0;
                }
        }
        mp[a[i]]=1;
    }
    cout<<"IMPOSSIBLE";
}
