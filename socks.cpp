#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105;
ll n,a,mp[N]={},ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        if (mp[a]==0) mp[a]=1;
        else{
            mp[a]=0;
            ans++;
        }
    }
    cout<<ans;
}
