#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll S=100005;
ll n,a,ans=0,x[S]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        for (ll j=S-5;j>=a;j--)
            if (x[j-a]!=0 || j==a){
                ans+=x[j]==0;
                x[j]=1;
            }
    }
    cout<<ans<<endl;
    for (ll i=1;i<=S-5;i++)
        if (x[i]==1) cout<<i<<" ";
}
