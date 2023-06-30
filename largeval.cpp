#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    cout<<max((a[n]-a[2])*(a[n-1]-a[1]),(a[n]-a[1])*(a[n-1]-a[2]));
}
