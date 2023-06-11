#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll S=1000005,inf=1e+18;
ll n,a,s,x[S];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=1;i<=s;i++) x[i]=inf;
    for (ll i=1;i<=n;i++){
        cin>>a;
        for (ll j=a;j<=s;j++)
            if (j==a || x[j-a]!=inf) x[j]=min(x[j],x[j-a]+1);
    }
    (x[s]==inf) ? cout<<-1 : cout<<x[s];
}
