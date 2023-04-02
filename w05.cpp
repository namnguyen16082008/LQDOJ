#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll n=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        n=n+int(s[i])-48;
    cout<<s.size()<<endl<<n;
}
