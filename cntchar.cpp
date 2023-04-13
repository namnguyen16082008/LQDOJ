#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll d=0,a[27]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++) a[int(s[i])-96]++;
    for (ll i=1;i<=26;i++) if (a[i]==1) d++;
    cout<<d;
}
