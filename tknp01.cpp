#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,k;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++){
        cin>>a;
        mp[a]++;
    }
    while (k--){
        cin>>a;
        (mp[a]==0) ? cout<<"NO"<<endl : cout<<"YES"<<endl;
    }
}
