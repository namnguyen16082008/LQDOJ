#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,ans;
string s;
void Solve(){
    ans=0;
    cin>>s;
    for (ll i=0;i<s.size();i++) ans+=(int(s[i])-48);
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while (t--) Solve();
}
