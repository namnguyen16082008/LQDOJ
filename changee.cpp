#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string s;
void Solve(){
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if (s[i]=='a' || s[i]=='e' || s[i]=='u' || s[i]=='i' || s[i]=='o') cout<<char(s[i]-32);
        else if (s[i]>='A' && s[i]<='Z' && s[i]!='A' && s[i]!='E' && s[i]!='U' && s[i]!='I' && s[i]!='O') cout<<char(s[i]+32);
        else cout<<s[i];
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) Solve();
}
