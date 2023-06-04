#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=55;
ll t,n,a[N];
void Build(){
    a[1]=1,a[2]=1;
    for (ll i=3;i<=N-5;i++) a[i]=a[i-1]+a[i-2];
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
