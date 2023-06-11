#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005,inf=1e+18;
ll n,ans=-inf,ans1,a[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for (ll i=1;i<=n;i++) cin>>a[i];
	for (ll i=n;i>=1;i--)
        if (a[i]>=ans){
            ans=a[i];
            ans1=i;
        }
    cout<<ans<<endl<<ans1;
}
