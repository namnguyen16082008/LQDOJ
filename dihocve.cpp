#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll n,x,mp[N]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>x;
        mp[x]=i;
    }
    for (ll i=1;i<=n;i++) cout<<mp[i]<<" ";
}
