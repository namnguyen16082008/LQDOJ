#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005;
ll n,m,k,a[N*N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            a[(i-1)*m+j]=i*j;
    sort(a+1,a+n*m+1);
    cout<<a[k];
}
