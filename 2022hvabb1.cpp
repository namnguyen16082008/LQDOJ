#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string n;
ll ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Tongchuso.inp","r",stdin);
    freopen ("Tongchuso.out","w",stdout);
    cin>>n;
    for (ll i=0;i<n.size();i++)
        ans+=char(n[i])-48;
    cout<<ans;
}
