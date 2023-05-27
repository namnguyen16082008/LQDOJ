#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll t,n,a[N]={};
void Build(){
    for (ll i=2;i<=N-5;i++)
        for (ll j=1;j<=(N-5)/i;j++)
            a[i*j]++;
}
void Solve(){
    cin>>n;
    cout<<a[n]+1<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>t;
    while (t--) Solve();
}
