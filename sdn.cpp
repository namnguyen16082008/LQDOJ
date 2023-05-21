#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    while (s[s.size()-1]=='0' && s.size()>1) s.erase(s.size()-1,1);
    for (ll i=s.size()-1;i>=0;i--) cout<<s[i];
}
