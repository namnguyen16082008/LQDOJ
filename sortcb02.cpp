#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>k;
	ll a[n+1];
	for (ll i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	cout<<a[k];
}
