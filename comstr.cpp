#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll d=1;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=1;i<s.size();i++)
        if (s[i]==s[i-1]) d++;
        else{
            if (d!=1) cout<<d;
            cout<<s[i-1];
            d=1;
        }
    if (d!=1) cout<<d;
    cout<<s[s.size()-1];
}
