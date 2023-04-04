#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,ans;
string s;
void Solve(){
    ans=0;
    for (ll i=0;i<(s.size()+1)/2;i++)
        if (s[i]!=s[s.size()-i-1]) ans++;
    (ans<=2) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (getline(cin,s)) Solve();
}
