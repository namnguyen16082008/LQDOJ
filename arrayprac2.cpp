#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000000;
ll n,k,ans=0,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    a[0]=0;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
        if (i>=3) ans+=(a[i]-a[i-3])>=k;
    }
    cout<<ans;
}
