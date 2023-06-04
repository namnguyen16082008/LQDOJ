#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,ans;
void Solve(){
    cin>>n;
    ans=0;
    for (ll i=1;i<=sqrt(n);i++)
        if (n%i==0){
            ans+=i%2==0;
            ans+=(n/i)%2==0 && i*i!=n;
        }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
