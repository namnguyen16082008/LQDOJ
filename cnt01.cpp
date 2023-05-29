#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005,A=1000005;
ll n,a[N],mp[A]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for (ll i=1;i<=n;i++)
        cout<<a[i]<<" "<<mp[a[i]]<<endl;
}
