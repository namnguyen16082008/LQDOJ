#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll n,a,ans=-inf;
ll Cp(ll n){
    if (n<0) return 0;
    ll x=(ll)sqrt(n);
    return x*x==n;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for (ll i=1;i<=n;i++){
        cin>>a;
        if (Cp(a)==0) ans=max(ans,a);
	}
	cout<<ans;
}
