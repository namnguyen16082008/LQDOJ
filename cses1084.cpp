#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005;
ll n,m,k,ans=0,x=1,y=1,a[N],b[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=m;i++) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    while (x<=n && y<=m){
        if (abs(a[x]-b[y])<=k){
            ans++;
            x++;
            y++;
        }
        else if (a[x]<b[y]) x++;
        else if (a[x]>b[y]) y++;
    }
    cout<<ans;
}
