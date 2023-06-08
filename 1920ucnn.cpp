#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans=__gcd(ans,a);
    }
    for (ll i=2;i<=sqrt(ans);i++)
        if (ans%i==0){
            cout<<i;
            return 0;
        }
    if (ans==1) cout<<-1;
    else cout<<ans;
}
