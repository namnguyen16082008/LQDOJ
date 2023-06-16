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
        if (mp[x-a[i]]!=0){
            cout<<mp[x-a[i]]<<" "<<i;
            return 0;
        }
        mp[a[i]]=i;
    }
    cout<<"IMPOSSIBLE";
}
