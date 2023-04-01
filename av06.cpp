#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    ll a[n+1];
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (a[i]<0) k=1;
    }
    if (k==0){
        cout<<-1<<" "<<-1;
        return 0;
    }
    for (ll i=1;i<=n;i++)
        if (a[i]<0){
            cout<<i<<" ";
            break;
        }
    for (ll i=n;i>=1;i--)
        if (a[i]<0){
            cout<<i<<" ";
            break;
        }
}
