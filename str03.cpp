#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline (cin,s);
    for (ll i=0;i<s.size();i++)
        (s[i]>='A' && s[i]<='Z') ? cout<<char(s[i]+32) : cout<<s[i];
}
