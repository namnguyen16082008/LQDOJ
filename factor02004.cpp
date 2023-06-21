#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10000005;
ll t,n,a[N]={};
void Build(){
    for (ll i=2;i<=sqrt(N);i++)
        if (a[i]==0)
            for (ll j=2;j<=N/i;j++)
                if (a[i*j]==0) a[i*j]=i;
    for (ll i=2;i<=N;i++)
        if (a[i]==0) a[i]=i;
}
void Solve(){
    cin>>n;
    while (n>1){
        cout<<a[n];
        if (n!=a[n]) cout<<'*';
        n/=a[n];
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>t;
    while (t--) Solve();
}
