#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,S,ans=0;
pair <ll,ll> a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>S;
    for (ll i=1;i<=n;i++) cin>>a[i].first>>a[i].second;
    sort(a+1,a+n+1);
    for (ll i=1;i<=n;i++){
        if (S<=a[i].first){
            cout<<ans;
            return 0;
        }
        S+=a[i].second;
        ans++;
    }
    cout<<ans;
}
