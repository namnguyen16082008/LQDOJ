#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x,s=0;
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>x;
        if (x%2==0) s+=x;
    }
    cout<<s;
}
