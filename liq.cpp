#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1001;
ll n,a[N],x[N],ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    x[1]=1;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        ll d=0;
        for (ll j=1;j<i;j++)
            if (a[j]<a[i]) d=max(d,x[j]);
        x[i]=d+1;
        ans=max(ans,x[i]);
    }
    cout<<ans;
}
