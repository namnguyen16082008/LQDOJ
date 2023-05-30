#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
string s;
void Solve(){
    cin>>s;
    for (ll i=0;i<s.size()-1;i++)
        for (ll j=i+1;j<s.size();j++)
            if (s[j]>s[i]) swap(s[i],s[j]);
    cout<<s<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while (t--) Solve();
}
