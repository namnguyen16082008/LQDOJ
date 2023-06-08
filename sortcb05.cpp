#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10005;
ll n,m,d=0,x[N],a[N],b[N];
vector <ll> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        x[i]=a[i];
    }
    sort(x+1,x+n+1,greater<ll>());
    for (ll i=1;i<=n;i++)
        if (a[i]==x[m]) v.push_back(b[i]);
        else if (a[i]>x[m]) d++;
    sort(v.begin(),v.end(),greater<ll>());
    cout<<x[m]<<" "<<v[m-d-1];
}
