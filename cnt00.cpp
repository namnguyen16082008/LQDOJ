#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,x,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans+=(a==x);
    }
    cout<<ans;
}
