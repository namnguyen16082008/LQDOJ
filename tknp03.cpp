#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000,inf=1e+18;
ll n,k,x,a[N+5];
ll Find(){
    ll l=1,r=n+1;
    while (l<r){
        ll md=(l+r)/2;
        if (a[md]<x) l=md+1;
        else r=md;
    }
    return l;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    a[n+1]=inf;
    while (k--){
        cin>>x;
        cout<<Find()<<endl;
    }
}
