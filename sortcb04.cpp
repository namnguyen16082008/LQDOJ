#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10005;
ll n,m,a[N],ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=m;i++)
        if (a[i]<0) ans+=a[i];
    cout<<abs(ans);
}
