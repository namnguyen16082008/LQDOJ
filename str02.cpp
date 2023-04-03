#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll ans=0;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline (cin,s);
    for (ll i=0;i<s.size();i++)
        if (s[i]==' ') ans++;
    cout<<ans;
}
