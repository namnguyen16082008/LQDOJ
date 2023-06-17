#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
string s;
void Solve(){
    cin>>s;
    if (s.size()%2==1){
        cout<<"NO"<<endl;
        return;
    }
    ll x[30]={},y[30]={};
    for (ll i=0;i<s.size()/2;i++) x[s[i]-96]=1;
    for (ll i=s.size()/2;i<s.size();i++) y[s[i]-96]=1;
    for (ll i=1;i<=26;i++)
        if (x[i]!=y[i]){
            cout<<"NO"<<endl;
            return;
        }
    cout<<"YES"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
