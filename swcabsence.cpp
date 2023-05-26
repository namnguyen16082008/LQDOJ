#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,m,a,mp[N]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=m;i++){
        cin>>a;
        mp[a]=1;
    }
    for (ll i=1;i<=n;i++)
        if (mp[i]==0) cout<<i<<" ";
}
