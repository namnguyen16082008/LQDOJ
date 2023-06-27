#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,s,ans=0,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=n;i++)
        if (a[i]<=s){
            s-=a[i];
            ans++;
        }
        else break;
    cout<<ans;
}
