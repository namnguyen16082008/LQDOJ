#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,ans;
void Solve(){
    ans=0;
    cin>>n;
    while (n>0){
        ans+=n/5;
        n/=5;
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while (t--) Solve();
}
