#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char k;
ll ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("demkt.inp","r",stdin);
    freopen ("demkt.out","w",stdout);
    while (cin>>k) ans+=(k=='9');
    cout<<ans;
}
