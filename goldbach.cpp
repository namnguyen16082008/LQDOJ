#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll n,ans,a[N]={};
void SangNt(){
    a[1]=1;
    ll i=1;
    while (i*i<=N){
        while (a[i]==1) i++;
        for (ll j=2;j<=N/i;j++)
            a[i*j]=1;
        i++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SangNt();
    cin>>n;
    ans=0;
    for (ll i=1;i<=n/2;i++)
        ans+=(a[i]==0 && a[n-i]==0);
    cout<<ans;
}
