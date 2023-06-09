#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,ans;
string s;
void Solve(){
    cin>>s;
    ans=0;
    for (ll i=1;i<s.size();i++) ans+=abs(s[i]-s[i-1]);
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
