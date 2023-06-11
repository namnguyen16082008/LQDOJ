#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,s,q,x,y,ans=0,a[N]={};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>s>>q;
	for (ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
	}
	while (q--){
        cin>>x>>y;
        ans+=(a[y]-a[x-1])<s;
	}
	cout<<ans;
}
