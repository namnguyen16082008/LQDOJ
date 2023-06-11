#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005;
ll n,s,x,y,ans=0,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    x=1;y=n;
    while (x<y){
        x+=(a[x]+a[y]<=s);
        y--;
        ans++;
    }
    cout<<ans+(x==y);
}
