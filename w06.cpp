#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    ll d=__gcd(a,b);
    for (ll i=1;i<=d;i++)
        if (d%i==0) cout<<i<<" ";
}
