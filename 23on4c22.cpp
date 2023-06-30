#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200000;
ll n,x=0,ans=0,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=n;i++){
        x+=a[i];
        ans+=a[i]*i-x;
    }
    cout<<ans;
}

