#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005,X=100005;
ll n,x,ans=0,h[N],s[N],a[X]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for (ll i=1;i<=n;i++) cin>>h[i];
    for (ll i=1;i<=n;i++){
        cin>>s[i];
        for (ll j=x;j>=h[i];j--)
            if (j==h[i] || a[j-h[i]]!=0) a[j]=max(a[j],a[j-h[i]]+s[i]);
    }
    for (ll i=1;i<=x;i++) ans=max(ans,a[i]);
    cout<<ans;
}

