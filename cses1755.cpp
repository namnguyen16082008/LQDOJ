#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char k;
string s;
ll a[30]={},d=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++) a[int(s[i])-64]++;
    for (ll i=1;i<=26;i++) d+=a[i]%2==1;
    if (d>1){
        cout<<"NO SOLUTION";
        return 0;
    }
    for (ll i=1;i<=26;i++)
        for (ll j=1;j<=a[i]/2;j++) cout<<char(i+64);
    for (ll i=1;i<=26;i++)
        if (a[i]%2) cout<<char(i+64);
    for (ll i=26;i>=1;i--)
        for (ll j=1;j<=a[i]/2;j++) cout<<char(i+64);
}
