#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,s=0,d=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    ll a[n+1];
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (a[i]>0){
            s+=a[i];
            d++;
        }
    }
    cout<<d<<" "<<s;
}
