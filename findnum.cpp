#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char k;
ll ans=0;
ll Change(ll n){
    ll s=0;
    while (n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>k) ans+=char(k)-48;
    while (ans>9) ans=Change(ans);
    cout<<ans;
}
