#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
ll Find(ll n){
    ll s=0;
    while (n>0){
        s=max(s,n%10);
        n/=10;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n>0){
        n-=Find(n);
        ans++;
    }
    cout<<ans;
}
