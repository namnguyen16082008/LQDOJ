#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,t,a[N],ct=1,d=0,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>t;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        d+=a[i];
        while (d>t){
            d-=a[ct];
            ct++;
        }
        ans=max(ans,i-ct+1);
    }
    cout<<ans;
}
