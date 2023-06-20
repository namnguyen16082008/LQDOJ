#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005;
ll n,x,y,ans=0,d=0;
vector <pair<ll,ll>> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>x>>y;
        v.emplace_back(x,1);
        v.emplace_back(y+1,-1);
    }
    sort(v.begin(),v.end());
    for (auto x : v){
        d+=x.second;
        ans=max(ans,d);
    }
    cout<<ans;
}
