#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=1000005;
ll n,a,mp[A]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        mp[a]++;
    }
    for (ll i=1;i<=A-5;i++)
        if (mp[i]!=0) cout<<i<<" "<<mp[i]<<endl;
}
