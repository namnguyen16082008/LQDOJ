#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
char k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>k;
    for (ll i=0;i<s.size();i++)
        if (s[i]!=k) cout<<s[i];
}
