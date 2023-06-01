#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=25,inf=1e+18;
ll n,a[N],s=0,t=0,ans=inf;
void Try(ll i){
    for (ll j=0;j<=1;j++){
        s+=a[i]*j;
        if (i<n) Try(i+1);
        else ans=min(ans,abs(t-2*s));
        s-=a[i]*j;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        t+=a[i];
    }
    Try(1);
    cout<<ans;
}

