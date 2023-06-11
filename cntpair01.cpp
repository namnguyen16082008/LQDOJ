#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=100005;
ll n,a,ans=0,mp[A]={};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for (ll i=1;i<=n;i++){
        cin>>a;
        ans+=mp[a];
        mp[a]++;
	}
	cout<<ans;
}
