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
        (s[i]=='L') ? n++ : n--;
    n=n%8+8*(n%8<0);
    for (ll i=n+1;i<=8;i++) cout<<i;
    for (ll i=1;i<=n;i++) cout<<i;
}
