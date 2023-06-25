#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=19;
ll t,n,a[N+5];
void Build(){
    a[1]=1;
    for (ll i=2;i<=N;i++) a[i]=a[i-1]*i;
}
void Solve(){
    cin>>n;
    cout<<a[n]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>t;
    while (t--) Solve();
}
