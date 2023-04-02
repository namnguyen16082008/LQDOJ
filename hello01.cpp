#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
char a[10];
string s;
void Solve(){
    cin>>s;
    ll d=1;
    for (ll i=0;i<s.size();i++)
        if (s[i]==a[d]) d++;
    (d==6) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[1]='h',a[2]='e',a[3]='l',a[4]='l',a[5]='o';
    while (n--) Solve();
}
