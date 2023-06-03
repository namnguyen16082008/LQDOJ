#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll X=1000005;
ll n,x,mp[X]={},ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>x;
        mp[x]++;
    }
    for (ll i=X-5;i>=1;i--){
        ans=0;
        for (ll j=1;j<=(X-5)/i;j++)
            ans+=mp[i*j];
        if (ans>1){
            cout<<i;
            return 0;
        }
    }
}
