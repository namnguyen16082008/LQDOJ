#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005;
ll n,a[N]={},x[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        ll o=i-1;
        while (a[o]>=a[i]) o=x[o];
        x[i]=o;
        cout<<x[i]<<" ";
    }
}
