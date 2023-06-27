#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,n=0,ans=0;
vector <ll> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>a){
        n++;
        v.push_back(a);
    }
    for (ll i=1;i<n-1;i++) ans+=(v[i]>v[i-1] && v[i]>v[i+1]);
    cout<<ans;
}
