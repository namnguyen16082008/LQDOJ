#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll L=1000005;
ll l,r,ans,a[L]={};
void Build(){
    for (ll i=1;i<=L/2;i++)
        for (ll j=2;j<=L/i;j++)
            a[i*j]+=i;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>l>>r;
    ans=0;
    for (ll i=l;i<=r;i++) ans+=a[i]>i;
    cout<<ans;
}
