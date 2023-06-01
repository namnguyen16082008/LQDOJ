#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,p,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>p;
    for (ll i=p;i<=n;i++) ans+=(__gcd(i,n)==p);
    cout<<ans;
}
