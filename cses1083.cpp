#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    ans=n*(n+1)/2;
    for (ll i=1;i<n;i++){
        cin>>x;
        ans-=x;
    }
    cout<<ans;
}
