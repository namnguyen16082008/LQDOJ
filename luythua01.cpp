#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=10000;
ll a,n,ans=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>n;
    while (n>0){
        ll d=1,s=a;
        while (d*2<=n){
            d*=2;
            s=(s*s)%MOD;
        }
        n-=d;
        ans=(ans*s)%MOD;
    }
    cout<<ans;
}
