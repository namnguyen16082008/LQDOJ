#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=1000005;
ll n,a,ans,x[A]={};
void Build(){
    x[1]=1;
    ll i=1;
    while (i*i<=A){
        while (x[i]==1) i++;
        for (ll j=2;j<=A/i;j++)
            x[i*j]=1;
        i++;
    }
}
ll Check(ll n){
    if (x[n]==0) return 0;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0){
            if (x[i]==0 && x[n/i]==0) return 1;
            else return 0;
        }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>n;
    ans=0;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans+=Check(a);
    }
    cout<<ans;
}
