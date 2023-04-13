#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n%9!=0) cout<<n%9;
    for (ll i=1;i<=n/9;i++) cout<<9;
}
