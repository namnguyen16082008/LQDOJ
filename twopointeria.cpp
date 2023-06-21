#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,m,a[2*N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n+m;i++) cin>>a[i];
    sort(a+1,a+n+m+1);
    for (ll i=1;i<=n+m;i++) cout<<a[i]<<" ";
}
