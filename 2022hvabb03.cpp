#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll x,n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Demso.inp","r",stdin);
    freopen ("Demso.out","w",stdout);
    cin>>x>>n>>m;
    cout<<(ll)n/(m/__gcd(x,m));
}
