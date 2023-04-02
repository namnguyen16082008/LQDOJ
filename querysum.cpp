#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,q,t,x,y,a[N],ST[4*N];
void Build(ll id, ll l, ll r){
    if (l==r){
        ST[id]=a[l];
        return;
    }
    ll md=(l+r)/2;
    Build(id*2,l,md);
    Build(id*2+1,md+1,r);
    ST[id]=ST[id*2]+ST[id*2+1];
}
void Update(ll id, ll l, ll r, ll x, ll y){
    if (l>x || r<x) return;
    if (l==r){
        ST[id]+=y;
        return;
    }
    ll md=(l+r)/2;
    Update(id*2,l,md,x,y);
    Update(id*2+1,md+1,r,x,y);
    ST[id]=ST[id*2]+ST[id*2+1];
}
ll Sum(ll id, ll l, ll r, ll x, ll y){
    if (l>y || r<x) return 0;
    if (l>=x && r<=y) return ST[id];
    ll md=(l+r)/2;
    return Sum(id*2,l,md,x,y)+Sum(id*2+1,md+1,r,x,y);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    for (ll i=1;i<=n;i++) cin>>a[i];
    Build(1,1,n);
    while (q--){
        cin>>t>>x>>y;
        if (t==1) Update(1,1,n,x,y);
        else cout<<Sum(1,1,n,x,y)<<endl;
    }
}
