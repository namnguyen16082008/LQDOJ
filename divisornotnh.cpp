#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll n,a,b,c;
ll __lcm(ll a, ll b){
    if (a/__gcd(a,b)>inf/b) return inf;
    return a/__gcd(a,b)*b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>a>>b>>c;
    cout<<n/a+n/b+n/c-n/__lcm(a,b)-n/__lcm(b,c)-n/__lcm(c,a)+n/__lcm(a,__lcm(b,c));
 }
