#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=1e9+7;
ll n,ans=1,s,d;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n>0){
        d=1,s=2;
        while (d*2<=n){
            d*=2;
            s=(s*s)%MOD;
        }
        n-=d;
        ans=(ans*s)%MOD;
    }
    cout<<ans;
}
